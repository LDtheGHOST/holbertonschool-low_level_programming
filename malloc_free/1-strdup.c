#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: A pointer to the new duplicate string, or NULL
 **/
char *_strdup(char *str)
{
char *s;
int a = 0;
int b = 0;

if (str == NULL)
{
return (NULL);
}
while (str[a] != '\0')
{
a++;
}
s = malloc((a + 1) * sizeof(*s));
if (s == NULL)
{
return (NULL);
}
for (b = 0; b <= a; b++)
{
s[b] = str[b];
}
return (s);
}
