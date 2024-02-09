#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that free a linked list
 * @head: The head of the linked list
 *
 */
void free_list(list_t *head)
{
   list_t *current = head;
   list_t *nextNode;

   while (current != NULL)
   {
      nextNode = current->next;
      free(current);
      current = nextNode;
   }
}
