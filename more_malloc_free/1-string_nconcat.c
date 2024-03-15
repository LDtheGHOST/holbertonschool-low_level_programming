#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: maximum number of bytes of s2 to concatenated to s1
 *
 * Return: If the function fails or NULL
 * or a pointer to the concatenated space in memory.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len = n, index;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0; s1[index]; index++)
len++;

ptr = malloc(sizeof(char) * (len + 1));

if (ptr == NULL)
return (NULL);

len = 0;

for (index = 0; s1[index]; index++)
ptr[len++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
ptr[len++] = s2[index];

ptr[len] = '\0';

return (ptr);
}
