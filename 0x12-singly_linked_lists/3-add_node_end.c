#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a node at end of a list
 * @head:pointer to first node
 * @str:data to be added
 * Return:address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *ptr;
	list *temp;

	while (!str[len])
		len++;
	if (!temp)
		return (NULL);
	if (*head == NULL)
	{
		(*head) = temp;
		return (temp);
	}
	ptr = (*head);
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
