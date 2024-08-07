#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
