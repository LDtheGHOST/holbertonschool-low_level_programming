#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer
 * @b: integer
 * Return: void
 **/
void swap_int(int *a, int *b)
{
int aa;

aa = *a;
*a = *b;
*b = aa;
}
