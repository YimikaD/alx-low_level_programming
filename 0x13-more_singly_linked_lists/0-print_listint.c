#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - Function that prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numofnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numofnodes++;
		h = h->next;
	}
	return (numofnodes);
}
