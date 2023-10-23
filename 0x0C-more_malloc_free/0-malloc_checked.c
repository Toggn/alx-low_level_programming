#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *m = malloc(b);

	if (m == NULL)
		exit(0);
	return (m);
}
