#include <stdio.h>
#include "lists.h"
/**
 * print_list - Print all elements of a list_t list
 * @h: A pointer to the head of the list
 *
 * This function prints the elements of a singly linked list of type list_t
 * and returns the number of nodes in the list.
 *
 * If the str member of a node is NULL, it prints "[0] (nil)" to indicate an
 * empty string.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}

h = h->next;
count++;
}

return (count);
}

