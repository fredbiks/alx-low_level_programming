/**
 * rot13 - Encodes a string using ROT13 encryption
 *
 * @str: Pointer to the string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; (ptr[i] >= 'a' && ptr[i] <= 'm') || (ptr[i] >= 'A' && ptr[i] <= 'M'); i++)
		{
			ptr[i] += 13;
		}

		for (i = 0; (ptr[i] >= 'n' && ptr[i] <= 'z') || (ptr[i] >= 'N' && ptr[i] <= 'Z'); i++)
		{
			ptr[i] -= 13;
		}

		ptr += i;
	}

	return (str);
}

