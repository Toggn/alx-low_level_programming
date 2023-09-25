#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int main_diag_sum = 0;
int anti_diag_sum = 0;
int i;


for (i = 0; i < size; i++)
{
main_diag_sum += a[i * size + i];
anti_diag_sum += a[i * size + (size - 1 - i)];
}

printf("Sum of main diagonal: %d\n", main_diag_sum);
printf("Sum of anti-diagonal: %d\n", anti_diag_sum);
}

