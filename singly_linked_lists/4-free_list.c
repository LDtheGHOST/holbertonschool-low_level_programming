#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - function that freess a list_t list.
 * @head: pointer to singly linked list
 *
 * Return: no return
 **/
void free_list(list_t *head)
{
list_t *variable_temp;

variable_temp = head;

while (head != NULL)
{
variable_temp = head;
head = head->next;
free(variable_temp->str);
free(variable_temp);
}
free(head);
}
