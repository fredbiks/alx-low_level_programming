/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: An integer less than, equal to, or greater than zero, depending on
 * whether s1 is less than, equal to, or greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}

	return (s1[i] - s2[i]);
}

