#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: char
 * Return: void
 **/
void print_rev(char *s)
{
int length;
int i;

length = 0;
while (s[length] != '\0')
length++;

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
