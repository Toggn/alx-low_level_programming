#include "main.h"
/**
 * main - Entry point
 * 
 *  function that prints the alphabet, in lowercase
 * 
*/

void print_alphabet(void)
{
for (char letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
