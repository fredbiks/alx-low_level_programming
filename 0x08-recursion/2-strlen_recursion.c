#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length is to be found
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

