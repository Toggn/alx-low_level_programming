#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * This function takes a pointer to a string and reverses it in-place.
 *
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

int i = 0;
while (i < length / 2)
{
char temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
i++;
}
}






