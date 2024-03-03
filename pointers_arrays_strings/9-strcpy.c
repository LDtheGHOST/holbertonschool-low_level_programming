#include "main.h"
#include <stdio.h>
/**
 *_strcpy - ckeck the code
 * @dest: char
 * @src: char
 * Return: char
 **/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest_start);
}
