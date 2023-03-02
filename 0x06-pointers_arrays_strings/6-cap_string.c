/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		    *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		    *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		    *ptr == '}')
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr -= 32;
			cap_next = 0;
		}

		ptr++;
	}

	return (str);
}

