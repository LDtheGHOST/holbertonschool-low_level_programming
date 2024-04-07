#include "main.h"
#include <stdio.h>

/**
 * factorial - Factorial a given number
 * @n: number
 * Return: (int) result
 **/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
