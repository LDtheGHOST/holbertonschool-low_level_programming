#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 **/
void print_line(int n) // function
{
if (n <= 0) // si n = 0
{
_putchar('\n'); // un carectere
}
else
{
int a;

for (a = 1; a <= n; a++) // condition 
{
_putchar('_');
}
_putchar('\n');
}
}
