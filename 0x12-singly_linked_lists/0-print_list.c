#include <stdio.h>
#include "lists.h"
/**
 * print_list - function prints elements of a linked list
 * @h:head pointer of the function
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
