#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - Inserts node at a given position.
 * @head: Pointer to the address of the head listint_t list.
 * @n: new node data.
 * @idx: Index of the list where the new node should be added. Idx starts at 0
 * Return: Address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newN;
	listint_t *temp = *head;

	newN = malloc(sizeof(listint_t));
	if (!newN || !head)
		return (NULL);

	newN->n = n;
	newN->next = NULL;
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}
	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newN->next = temp->next;
			temp->next = newN;
			return (newN);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
