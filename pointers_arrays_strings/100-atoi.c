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
int result = 0;
int sign = 1;
int digit;

while (*s == ' ' || *s == '\t' || *s == '\n')
s++;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
s++;
while (*s >= '0' && *s <= '9')
{
digit = *s - '0';
if (sign == 1 && (result > (INT_MAX - digit) / 10))
return (INT_MAX);
else if (sign == -1 && (result < (INT_MIN + digit) / 10))
return (INT_MIN);
result = result * 10 + sign * digit;
s++;
}
return (result);
}

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
