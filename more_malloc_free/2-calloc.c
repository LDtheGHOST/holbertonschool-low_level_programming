#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc -  allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: is an array
 * @size: elements of array
 *
 * Return: Always 0.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
