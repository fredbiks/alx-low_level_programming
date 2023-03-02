#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_letters = "aAeEoOtTlL";
	char *leet_numbers = "4433007711";
	int i, j;

	while (*ptr)
	{
		i = 0;
		while (leet_letters[i])
		{
			if (*ptr == leet_letters[i])
			{
				*ptr = leet_numbers[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}

