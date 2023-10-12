#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator -maps an array and functoin pointer
 *@array : int a array
 *@size :size of array
 *@action :a function pointer
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size;
while (array < end)
{
action(*array);
array++;
}
}
