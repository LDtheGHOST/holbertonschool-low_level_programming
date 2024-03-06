#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 * @dest: char
 * @src: char
 * @n: unsigned integer
 * Return: char
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_d = dest;
char *ptr_src = src;

while (n-- >0)
*ptr_d++ = *ptr_src++;
return (dest);
}
