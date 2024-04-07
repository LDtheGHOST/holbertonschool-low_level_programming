#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to a pointer to a list structure.
 * @str: string of characters
 *
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t length = 0;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}
while (str[length])
{
length++;
}
new_node->len = length;
new_node->str = strdup(str);

if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = *head;
*head = new_node;

return (new_node);
}
