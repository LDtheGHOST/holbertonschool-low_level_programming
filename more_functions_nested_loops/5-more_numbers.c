#include <stdio.h>
#include "main.h"
/**
 * more_numbers -  imprime 10 fois les nombres, de 0 a 14
 * suivi d'une new line.
 **/
void more_numbers(void)
{
int i;
int num = 0;

for (i = 0 ; i < 10 ; i++)
{
while (num < 15)
{
if (num > 9)
_putchar('0' + num / 10);
_putchar('0' + num % 10);
num++;
}
num = 0;
_putchar('\n');
}
}
