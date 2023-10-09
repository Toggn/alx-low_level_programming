#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc.
 *
 * This function allocates memory of size 'b' using malloc. If malloc fails,
 * it terminatesi the process with a status value of 98.
 *
 * @b: Size of memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);

if (ptr == NULL)
{
printf(stderr, "Error: malloc failed\n");
exit(98);
}

return (ptr);
}
