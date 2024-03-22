nclude "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: no return.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i = 0;

if (n > 0)
{
va_start(valist, n);

while (i < n)
{
printf("%d", va_arg(valist, int));

if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
va_end(valist);
}
printf("\n");
}
