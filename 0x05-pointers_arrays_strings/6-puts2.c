#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 *
 * @str: string to print
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}

putchar('\n');
}

