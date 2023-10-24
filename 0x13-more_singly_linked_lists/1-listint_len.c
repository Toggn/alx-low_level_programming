#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of you.
 */
size_t listint_len(const listint_t *h)

{
	size_t you = 0;

	while (h != NULL)
	{
		h = h->next;
		you++;
	}
	return (you);
}
