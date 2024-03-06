#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 **/
int main(void)
{		
char *str;

str = "0123456789";
puts_half(str);
return (0);
}

{
char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
char *p;

p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}

int c3[3][3] = {
{0, 1, 5},
{10, 11, 12},
{1000, 101, 102},
};
int c5[5][5] = {
{0, 1, 5, 12124, 1234},
{10, 11, 12, 123521, 12512},
{1000, 101, 102, 12545, 214543435},
{100, 1012451, 11102, 12545, 214543435},
{10, 12401, 10452, 11542545, 1214543435},
};
print_diagsums((int *)c3, 3);
print_diagsums((int *)c5, 5);
return (0);
}
