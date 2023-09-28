#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * This function uses recursion to print each character of the string until
 * a null terminator is encountered, then prints a new line.
 *
 * @s: Pointer to the input string.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return;
}
printf("%c", *s);
_puts_recursion(s + 1);
}

