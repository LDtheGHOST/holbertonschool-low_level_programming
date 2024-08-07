#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
unsigned int conv = 0;
int num = 0;

if (b == NULL)
{
return (0);
}
while (b[num] != '\0')
{
if (b[num] != '0' && b[num] != '1')
{
return (0);
}
conv <<= 1;
conv += b[num] - '0';
num++;
}
return (conv);
}
