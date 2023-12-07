#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h:pointer to first element
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
