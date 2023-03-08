#define NULL ((void *)0)

/**
 * _strstr - finds the first occurrence of the substring needle in the
 *           string haystack.
 *
 * @haystack: the string to search in.
 * @needle: the substring to search for.
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

for (i = 0; *(haystack + i); i++)
{
for (j = 0; *(needle + j); j++)
{
if (*(haystack + i + j) != *(needle + j))
{
break;
}
}

if (!*(needle + j))
{
return (haystack + i);
}
}

return (NULL);
}
