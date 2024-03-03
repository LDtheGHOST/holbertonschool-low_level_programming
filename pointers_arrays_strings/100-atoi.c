#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - check the code
 * @s: char
 * Return: integer
 **/
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
int started = 0;

while (*s)
{
if (*s == '-')
{
i *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
started = 1;
}
else if (started)
{
break;
}
s++;
}
return (num * i);
}
