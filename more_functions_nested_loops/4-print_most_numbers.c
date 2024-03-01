#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - imprime les numbre de 0 a 9
 * sauf les numbre 2 et 4
 *
 **/
void print_most_numbers(void)
{
int num = 0;

while (num < 10)
{
if (num != 2 && num != 4)
_putchar('0' + num);
num++;
}
_putchar('\n');
}
