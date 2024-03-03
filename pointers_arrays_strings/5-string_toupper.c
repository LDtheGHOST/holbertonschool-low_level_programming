#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: char
 * Return: char
 **/
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
ptr++;
}
return (str);
}
