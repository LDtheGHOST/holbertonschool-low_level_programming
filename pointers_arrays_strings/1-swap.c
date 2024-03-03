#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatene deux chaine suivie d'un n octet
 * @dest: chaine 1
 * @src: chaine 2
 * @n: nombre maximum de charactere
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
