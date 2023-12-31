#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *you;

	you = malloc(sizeof(listint_t));

	if (you == NULL)
		return (NULL);

	you->n = n;
	you->next = *head;
	*head = you;

	return (*head);
}
