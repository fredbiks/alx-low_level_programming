#define NULL ((void *)0)

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to the string to search.
 * @c: the character to locate.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return (NULL);
}

