#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print a string reversed
 * @s: Text
 * Return: void
 **/
void _print_rev_recursion(char *s)
{
__rev_recursion(s, 0);
}

/**
 * __rev_recursion - Reverse recursion
 * @s: Text
 * @direction: 0: increment ~ 1: decrement
 * Return: void
 **/
void __rev_recursion(char *s, int direction)
{
if (*s == '\0')
{
if (direction == 0)
{
s--;
__rev_recursion(s, 1);
return;
}
return;
}
else if (direction == 1)
{
_putchar(*s);
s--;
__rev_recursion(s, 1);
}
else
{
s++;
__rev_recursion(s, 0);
}
}
