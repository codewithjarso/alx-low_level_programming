#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add node at the beginning of a list
 * @head:pointer to a pointer
 * @str:data to be added at the begining
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
return (*head);
}
