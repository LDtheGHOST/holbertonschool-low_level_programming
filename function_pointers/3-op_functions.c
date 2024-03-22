#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Add
 **/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sustracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Differnce
 **/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - miltiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Multiplication
 **/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Division
 **/
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calculates two number
 * @a: first
 * @b: second
 *
 * Return: the remainde of the division of a by b.
 **/
int op_mod(int a, int b)
{
return (a % b);
}
