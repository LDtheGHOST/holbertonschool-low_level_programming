#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 *
 * Return: Nothing or NULL
 **/
char *str_concat(char *s1, char *s2)
{
int i, j, k, len1, len2;
char *c;

len1 = len2 = 0;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
len1++;
}
if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
len2++;
}

k = len1 = len2;
c = (char *)malloc(sizeof(char) * (k + 1));
if (c == NULL)
return (NULL);

for (i = 0; i < len1; i++)
c[i] = s1[i];
for (j = 0; j < len2; j++, i++)
c[i] = s2[j];

c[k] = '\0';
return (c);
}
