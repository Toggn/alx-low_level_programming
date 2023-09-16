#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9, followed  newline.
 *
 * It uses the `_putchar` function to print the numbers
 *
 * Return:0(success)
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

