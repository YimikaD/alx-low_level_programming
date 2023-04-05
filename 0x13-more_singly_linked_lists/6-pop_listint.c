#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head nodes of listint_t linked list.
 * @head: Pointer to the address of the listint_t head.
 * Return: The head nodes data, 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	 listint_t *temp;
	 int num;

	 if (!head || !*head)
		 return (0);
	 num = (*head)->n;
	 temp = (*head)->next;
	 free(*head);
	 *head = temp;
	 return (num);
}
