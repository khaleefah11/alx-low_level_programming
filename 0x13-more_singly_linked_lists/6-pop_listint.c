#include "lists.h"

/**
 * pop_listint - Program that deletes the head node of
 * a linked list and returns the head node's data
 * @head: head of a list
 *
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;


	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
