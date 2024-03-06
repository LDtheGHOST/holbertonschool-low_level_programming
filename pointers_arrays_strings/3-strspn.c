#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: accept
 * Return: integer
 **/
unsigned int _strspn(char *s, char *accept)
{
unsigned int sum = 0;
int found = 0;

while (*s)
{
char *ptr = accept;

found = 0;
while (*ptr)
{
if (*s == *ptr)
{
found = 1;
break;
}
ptr++;
}
if (found == 1)
sum++;
else
break;
s++;
}
return (sum);
}
