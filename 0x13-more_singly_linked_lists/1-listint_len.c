#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - Function that returns number of elements in a linked list
 * @h: Pointer to the head of a listint_t list
 * Return: Number of elements in linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
