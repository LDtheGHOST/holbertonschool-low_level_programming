#include "main.h"
#include <stdio.h>
/**
 * print_diagonal -dessine une ligne diagonale sur le terminal
 * @n: nomber de fois ou le caractere \ doit etre imprime
 **/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
