#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - imprime les numbre de 0 a 9
 * sauf les numbre 2 et 4
 *
 **/
void print_most_numbers(void)
{
int num = 0; // nombre entier

while (num < 10) // boucle
{
if (num != 2 && num != 4) // si 2 et 4 supprimer
_putchar('0' + num); // un seul caretere 
num++; // augmente de 1
}
_putchar('\n');
}
