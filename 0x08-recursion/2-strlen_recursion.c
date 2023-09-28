#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 *
 * This function calculates the length of a string by recursively counting
 * each character until a null terminator is encountered.
 *
 * @s: Pointer to the input string.
 *
 * Returns: Length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return (0);
}

printf("%c", *s);

return (1); + _strlen_recursion(s + 1);
}

