#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees listint_t list.
 * @head: Pointer to the head of listint_t list to free.
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
