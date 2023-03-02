/**
*_strcat - Concatenates two strings.
*@dest: Pointer to destination string.
*@src: Pointer to source string.
*Return: Pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
char *result = dest;

/* move the pointer to the end of dest */
while (*dest != '\0')
{
dest++;
}

/* concatenate src to dest */
while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}

/* add a terminating null byte */
*dest = '\0';

return (result);
}

