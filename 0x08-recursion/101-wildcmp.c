/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string (can contain the special character *)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* base case */
return (1);

if (*s2 == '*') /* recursive cases */
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));
else
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0); /* strings are not identical */
}
