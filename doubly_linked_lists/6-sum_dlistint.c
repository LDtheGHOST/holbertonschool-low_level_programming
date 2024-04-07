#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 **/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tempo = head;

while (tempo != NULL)
{
sum += tempo->n;
tempo = tempo->next;
}
return (sum);
}
