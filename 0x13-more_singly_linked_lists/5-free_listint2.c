#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Pointer to the address of listint_t list head.
 * ---: Function sets head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL)
		return;
	while (*head)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	head = NULL;
}
