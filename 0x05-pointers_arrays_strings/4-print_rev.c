#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * This function takes a pointer to a string and iterates through the string
 * in reverse order, printing each character, followed by a newline character.
 *
 * @s: Pointer to the input string.
 */

void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}
while (length >= 0)
{
putchar(s[length]);
length--;
}

putchar('\n');
}
