#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 *
 * This function takes a string as input and modifies it by converting all
 * lowercase letters to uppercase.
 *
 * @str: Pointer to the input string.
 *
 * Returns: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{

*ptr = *ptr - ('a' - 'A');
}
ptr++;
}

return (str);
}
