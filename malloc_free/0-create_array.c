#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: the size of memory to print
 * @c: charater of arrays
 *
 * Return: Nothing
 **/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(*a));

if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
