#include "variadic_functions.h"
#include <stdio.h>

/**
 * ;print_all - prints all 
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
break;
default:
break;
}

if (format[i + 1])
printf(", ");

i++;
}

printf("\n");
va_end(args);
}

