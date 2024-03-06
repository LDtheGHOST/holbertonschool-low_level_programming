#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: Pointer to the character string to parse
 * @accept: Pointer to the character string containing
 * the character to search for
 *
 * Return: POinter to the first character in s that matches one of
 * the characters in accept or NULL if not found
 **/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
