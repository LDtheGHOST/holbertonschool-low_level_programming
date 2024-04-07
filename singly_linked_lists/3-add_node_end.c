#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: pointer to a pointer of type "list_t"
 * @str: pointer to a constant character (string)
 *
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last;
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
if (*head == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
new_node->next = NULL;
last = *head;

while (last->next)
{
last = last->next;
}
last->next = new_node;
}
return (new_node);
}
