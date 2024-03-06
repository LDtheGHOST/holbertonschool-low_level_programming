#include "main.h"
#include <stdio.h>

/**
 *_memset - fills memory with a constant byte.
 * @b: char
 * @s: char
 * @n: unsigned int
 * Return: char
 **/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n-- > 0)
*ptr++ = b;
return (s);
}
