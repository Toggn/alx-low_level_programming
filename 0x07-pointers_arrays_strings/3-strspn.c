#include "main.h"

/**
 * _strspn - Gets the length of a prefix substrin
 *
 * @s: Pointer to the input string.
 * @accept: Pointer to the set of accepted characters.
 *
 * Return: The number of bytes in the initial segment of
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *a;

while (*s != '\0')
{
found = 0;
a = accept;

while (*a != '\0')
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}

if (found)
count++;
else
break;
s++;
}

return (count);
}

