#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to an first integer
 *
 * @b: Pointer to an second integer
 */


void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

