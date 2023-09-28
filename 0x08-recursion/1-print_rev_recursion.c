#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * This function use recursion to print each character of the string in reverse
 * order, starting from the end of the string and moving towards the beginning.
 *
 * @s: Pointer to the input string.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return;
}

printf("%c", *s);

_print_rev_recursion(s + 1);
}
