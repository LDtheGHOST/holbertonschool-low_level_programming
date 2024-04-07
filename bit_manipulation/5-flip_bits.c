#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: variable de type unsigned long int
 * @m: variable de type unsigned long int
 *
 * Return: number of the bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_resultat = n ^ m;
unsigned int count = 0;

while (xor_resultat)
{
count += xor_resultat & 1;
xor_resultat >>= 1;
}
return (count);
}
