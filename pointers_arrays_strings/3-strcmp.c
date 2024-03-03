#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check the code
 * @s1: char
 * @s2: char
 * Return: integer
 **/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
