#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: char
 * Return: char
 **/
char *cap_string(char *s)
{
int x = 1;
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (x == 1 && isalpha(s[i]))
{
if (s[i] >= 'a' && s[i] <= 'z' && (i == 0 || !isalpha(s[i - 1]) ||
!isalpha(s[i + 1])))
s[i] = s[i] - 32;
x = 0;
}
else if (isdigit(s[i]))
x = 0;
else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
x = 1;
}
return (s);
}
