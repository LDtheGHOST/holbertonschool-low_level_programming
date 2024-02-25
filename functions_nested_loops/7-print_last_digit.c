#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 *
 * Return: integer
 **/
int print_last_digit(int n)
{
n = n % 10;
{
if (n >= 0)
{
_putchar(n + '0');
}
else
{
n = n * -1;
_putchar(n + '0');
}
return (n);
}
}
