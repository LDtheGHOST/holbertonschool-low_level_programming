#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 (sucess) or -1 (failed).
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tempo;
unsigned int count;

if (head == NULL || *head == NULL)
return (-1);
tempo = *head;
if (index == 0)
{
*head = tempo->next;
if (tempo->next != NULL)
{
tempo->next->prev = NULL;
}
free(tempo);
return (1);
}
for (count = 0; count < index; count++)
{
if (tempo->next == NULL)
return (-1);
tempo = tempo->next;
}
tempo->prev->next = tempo->next;
if (tempo->next != NULL)
tempo->next->prev = tempo->prev;
free(tempo);
return (1);
}
