#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function qui imprime les nombre de 0 a 9
 **/
void print_numbers(void)
{
int num = 0;

while (num < 10)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
