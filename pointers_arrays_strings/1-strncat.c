#include "main.h"
#include <stdio.h>

/**
 *_strncat - concatenates two strings.
 * @dest: char
 * @src: char
 * @n: integer
 * Return: char
 **/
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

while (*p != '\0')
p++;
while (*src != '\0' && n > 0)
{
*p++ = *src++;
n--;
}
*p = '\0';
return (dest);
}
