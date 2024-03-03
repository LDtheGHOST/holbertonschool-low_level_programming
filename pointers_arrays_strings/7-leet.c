#include "main.h"
#include <stdio.h>
/**
 * leet - check the code
 * @str: char
 * Return: char
 **/
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_subs = "4433007711";
int i;

for (; *ptr; ptr++)
{
for (i = 0; leet_chars[i]; i++)
{
if (*ptr == leet_chars[i])
{
*ptr = leet_subs[i];
break;
}
}
}
return (str);
}
