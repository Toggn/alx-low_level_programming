#include "main.h"

/**
 * print_alphabet - Function to print the alphabet from 'a' to 'z'
 *
 * Return: Nothing (void)
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}



