/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: If the string is a palindrome - 1.
 *         Otherwise - 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (is_palindrome(s + 1) && 1);

	return (0);
}
