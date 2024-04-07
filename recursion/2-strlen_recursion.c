#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - Length of a string
 * @s: Text
 * Return: (int) value
 **/
int _strlen_recursion(char *s)
{
return (__strlen_count(s));
}

/**
 * __strlen_count - Count
 * @s: Text
 * Return: (int) value
 **/
int __strlen_count(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + __strlen_count(s));
}
