#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 *
 * This function takes a pointer to a second half of the string,
 * or the last n characters if the string length is odd,
 *
 * where n = (length_of_the_string - 1) / 2.
 *
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
int length = strlen(str);
int start_index;


if (length % 2 == 0)
{
start_index = length / 2; 
}
else
{
start_index = (length - 1) / 2;
}
while (i < length)
int start_index;
{

printf("%c", str[i]);
i++;
}

printf("\n");
}

