#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: variadic inputs
 *
 * Return: result.
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int i, result = 0;

va_start(valist, n);

for (i = 0; i < n; i++)
{
result += va_arg(valist, const unsigned int);
}
va_end(valist);

return (result);
}
