#include <stdio.h>
#include "main.h"
/**
 * more_numbers -  imprime 10 fois les nombres, de 0 a 14
 * suivi d'une new line.
 **/
void more_numbers(void) // function
{
int i; // nombre entier
int num = 0;

for (i = 0 ; i < 10 ; i++) // condition 
{
while (num < 15)
{
if (num > 9) // si
_putchar('0' + num / 10); // un seul caratere
_putchar('0' + num % 10);
num++;
}
num = 0;
_putchar('\n');
}
}
