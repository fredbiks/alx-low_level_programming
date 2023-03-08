#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: the number whose factorial is to be found
 *
 * Return: the factorial of the number, or -1 if the number is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

