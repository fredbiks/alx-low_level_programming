/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 *
 * @s: pointer to the memory area to fill.
 * @b: the constant byte to fill the memory area with.
 * @n: number of bytes to fill with b.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

