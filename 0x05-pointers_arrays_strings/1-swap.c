#include "main.h"
#include <stdio.h>

int main(void)
{
char *s = "hello";
int len = _strlen(s);
printf("The length of '%s' is %d\n", s, len);
return 0;
}

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return len;
}

