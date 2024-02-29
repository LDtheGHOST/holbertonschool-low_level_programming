#include "main.h"
#include <stdio.h>
/**
 * _isupper - verifie les caracteres majuscules
 * @c: varibles text
 *
 * Return: toujours 0.
 **/
int _isupper(int c) // int est la fonction qui dis que _isupper est un nombre entier 
{
if (c >= 'A' && c <= 'Z') // if signifie une condition dans la quel c la variable  = A es t65
{ // && represente et
return (1);
}
else
{
return (0);
}
}
