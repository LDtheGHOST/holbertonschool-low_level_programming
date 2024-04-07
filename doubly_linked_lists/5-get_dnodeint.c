#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * if the node does not exist, return NULL
 *
 * Return: the nth node of a dlistint_t
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tempo = head;
unsigned int count = 0;

while (tempo != NULL && count < index)
{
tempo = tempo->next;
count++;
}
if (tempo == NULL || count < index)
{
return (NULL);
}
return (tempo);
}
