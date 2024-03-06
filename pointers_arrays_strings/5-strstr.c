#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string
 * @needle: string
 *
 * Return: Pointer to the beginning of the located substring
 * or NULL if not found
 **/
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
