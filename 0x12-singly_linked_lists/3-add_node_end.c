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
	unsigned int len = 0;
	list_t *ptr = *head;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	while (str[len])
		len++;
	temp->str = strdup(str);
        temp->len = len;
        temp->next = NULL;
	if (!temp)
		return (NULL);
	if (*head == NULL)
	{
		(*head) = temp;
		return (temp);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
