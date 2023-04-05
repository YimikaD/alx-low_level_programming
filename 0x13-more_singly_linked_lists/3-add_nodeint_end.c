#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint_end - Adds new node at tthe end of listint_t list.
 * @head: Pointer to the address of the head of listint_t list.
 * @n: New node
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN, *end;

	newN = malloc(sizeof(listint_t));

	if (newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
		*head = newN;

	else
	{
		end = *head;

	while (end->next)
		end = end->next;
	end->next = newN;
	}
	return (*head);
}
