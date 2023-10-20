#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the head of the list
 *
 * This function frees the memory allocated for each node in the list,
 * including the strings and the nodes themselves.
 */
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
}
current = head;
head = head->next;
free(current->str);
free(current);
}
}

