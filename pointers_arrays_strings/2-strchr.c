#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character c in the string s or NULL if not found
 * @s: pointer to string
 * @c: chararcter to found
 *
 * Return: Pointer the first occurence to character c in string s or NULL.
 **/
char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
