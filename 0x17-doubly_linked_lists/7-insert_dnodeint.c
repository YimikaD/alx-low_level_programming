#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * that inserts a new node at a given position.
 *
 * @h: head of list.
 * @index: index to insert in.
 * @n: data to insert.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int index, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = NULL;
	unsigned long int count = 0;

	if ((temp == NULL && !(index == 0)))
		return (NULL);
	while (temp)
	{
		count++;
		if (count - 1 == index)
			break;
		temp = temp->next;
	}
	count = count - (count != 0);
	if (index > count + 1)
		return (NULL);
	if (index == 0)
		return (add_dnodeint(h, n));
	if (index == count + 1)
		return (add_dnodeint_end(h, n));
	if (index == count)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = temp;
		if (temp != NULL)
			new->prev = temp->prev;
		else
			new->prev = NULL;
		if (temp->prev != NULL)
		{
			temp->prev->next = new;
			temp->prev = new;
		}
		return (new);
	}
	return (NULL);
}
