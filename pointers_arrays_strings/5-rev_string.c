#include "main.h"
/**
 * rev_string - inverser la chaine
 * @s: chaine a inverser
 **/
void rev_string(char *s)
{
char rev = s[0];
int text = 0;
int a;

while (s[text] != '\0')
text++;
for (a = 0; a < text; a++)
{
text--;
rev = s[a];
s[a] = s[text];
s[text] = rev;
}
}
