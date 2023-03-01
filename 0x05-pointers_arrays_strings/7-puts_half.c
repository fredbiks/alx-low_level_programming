#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
int len = 0, i;

/* Find the length of the string */
while (str[len] != '\0')
len++;

/* If the length is odd, print the last (len - 1) / 2 characters */
if (len % 2 != 0)
i = (len - 1) / 2;
else
i = len / 2;

/* Print the second half of the string */
while (i < len)
{
putchar(str[i]);
i++;
}
putchar('\n');
}

