#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first.
 *
 * This function takes a pointer to a string and prints every other character,
 * starting with the first character, followed by a new line.
 *
 * @str: Pointer to the input string.
 */


void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
