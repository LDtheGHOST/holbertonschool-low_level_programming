#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: char
 * Return: integer.
 **/
int _strlen(char *s)
{
int length;

length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
