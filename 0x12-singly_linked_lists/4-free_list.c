#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: The head of the linked list.
 */
void free_list(list_t *head)
{
list_t *current, *next_node;

current = head;

while (current != NULL)
{
next_node = current->next;
free(current->str);
free(current);
current = next_node;
}
}
