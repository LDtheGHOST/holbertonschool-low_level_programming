#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to print
 *
 * Return: int.
 **/
void print_to_98(int n)
{
int i = 98;
int j;

if (n != 98)
{
if (n > 98)
{
for (j = n; j > i; j--)
printf("%d, ", j);
}
else
{
for (j = n; j < i; j++)
printf("%d, ", j);
}
}
printf("%d\n", i);
}
