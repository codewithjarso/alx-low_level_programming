#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - function that adds a node at end of a list
 * @head:pointer to first node
 * @str:data to be added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *ptr *temp;

	while (!str[len])
		len++;
	ptr = head;
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	while (!ptr)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}
