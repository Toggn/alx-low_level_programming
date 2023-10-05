#include <stdlib.h>
#include"main.h"
/**
 * create_array - Creates an array of characters
 *
 * This function allocates memory for an array of size 'size' and initializes
 * each element with the character 'c'.
 *
 * @size: Size of the array to create.
 * @c: Character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)

{
arr[i] = c;
}

return (arr);
}

