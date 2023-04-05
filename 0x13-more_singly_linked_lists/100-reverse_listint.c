#include "lists.h"
#include <stdio.h>

/**
 * *reverse_listint - Function that reverse a list
 * @head: Pointer to the head of the list.
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = new;
	}
	*head = last;
	return (*head);
}
