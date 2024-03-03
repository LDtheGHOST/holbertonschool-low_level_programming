#include "main.h"
#include <stdio.h>
/**
 *_strcat - function that concatenates two strings.
 * @dest: char
 * @src: char
 * Return: Always 0.
 **/
char *_strcat(char *dest, char *src)
{
char *dest0 = dest;

while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest0);

}
