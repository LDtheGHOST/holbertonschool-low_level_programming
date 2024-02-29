nclude <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: integer
 * Return: if c in uppercase return (1) else return (0).
 **/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
