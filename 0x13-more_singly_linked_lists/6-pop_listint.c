#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int sara;
	listint_t *h;
	listint_t *you;

	if (*head == NULL)
		return (0);

	you = *head;

	sara = you->n;

	h = you->next;

	free(you);

	*head = h;

	return (sara);
}
