#include "main.h"
/**
 * islower - checks for lowercase characters.
 *
 * Return: int.
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
