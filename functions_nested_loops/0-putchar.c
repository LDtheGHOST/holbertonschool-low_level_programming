#include <stdio.h>
#include "main.h"

/**
 * main - Prints _putchar followed by a new line
 *
 * Return: Always 0.
 **/
int main(void)
{
int i;
char c[8] = "_putchar";
{
for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
}
