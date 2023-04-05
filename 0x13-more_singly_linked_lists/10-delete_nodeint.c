#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Pointer to the address of the linked list head.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *temp = *head;
	  listint_t *now = NULL;
	  unsigned int a = 0;
	  
	  if (*head == NULL)
		  return (-1);
	   if (index == 0)
	   {
		   *head = (*head)->next;
		   free(temp);
		   return (1);
	   }
	   while (a < index - 1)
	   {
		   if (!temp || (!temp->next))
			   return (-1);
		   temp = temp->next;
		   a++;
	   }
	   now = temp->next;
	   temp->next = now->next;
	   free(now);
	   return(1);
}
