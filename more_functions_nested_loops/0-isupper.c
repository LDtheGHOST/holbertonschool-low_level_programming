#include "main.h"
#include <stdio.h>
/**
 * _isupper - verifie les caracteres majuscules
 * @c: varibles text
 *
 * Return: toujours 0.
 **/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
