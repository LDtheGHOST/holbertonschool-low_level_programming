#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the chessboard.
 * @s: array of char 2D
 * Return: void.
 **/
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
printf("%c", a[i][j]);
printf("\n");
}
}
