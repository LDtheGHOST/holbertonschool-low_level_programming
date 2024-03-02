#include <stdio.h>
/**
 * main - imprime les nombre de 1 a 100, suivi d'une nouvelle ligne
 * mais pour les multiples de trois, imprimez Fizz au lieu du numero
 * et pour les multiples de cinq imprime Buzz
 * et pour les multiple de trois et cinq, imprime FizzBuzz
 * Return: toujours 0.
 **/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
