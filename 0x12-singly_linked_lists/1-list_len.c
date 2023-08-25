#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}
