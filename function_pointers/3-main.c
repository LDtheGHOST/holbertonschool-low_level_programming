#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 **/
int main(int argc, char *argv[])
{
int a, b, cal;
int (*operation)(int, int);
char *get_op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
get_op = argv[2];

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
{
printf("Error\n");
exit(100);
}
operation = get_op_func(get_op);
cal = operation(a, b);

printf("%d\n", cal);
return (0);
}
