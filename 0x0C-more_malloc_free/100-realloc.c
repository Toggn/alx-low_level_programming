#include "main.h"


/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *temp_block;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0)
{
free(ptr);
return (NULL);
}

temp_block = malloc(new_size);
if (temp_block != NULL)
{
for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
{
((char *)temp_block)[i] = ((char *)ptr)[i];
}
free(ptr);
}
return (temp_block);
}

