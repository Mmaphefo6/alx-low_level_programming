#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t linked list.
 * @h: The head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
