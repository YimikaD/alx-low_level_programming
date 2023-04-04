#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint - Adds a new node to the beginning of listint_t list.
 * @head: Pointer to the address of the head of listint_t list.
 * @n: New nodes
 * Return: The address of the new elements, NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	newN = malloc(sizeof(listint_t));
	if(newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;
	newN->next = *head;
	*head = newN;
	return (newN);
}
