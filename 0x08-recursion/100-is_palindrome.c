#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * This function checks whether the input string is a palindrome,
 * meaning it reads the same forwards and backwards.
 *
 * @s: Pointer to the input string.
 *
 * Returns: 1 if the input string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
int i, j;
    
if (length == 0)
return (1);

for (i = 0, j = length - 1; i < j; i++, j--)
{

while (i < j && !isalnum(s[i]))
i++;
while (i < j && !'isalnum'(s[j]))
j--;

if ('tolower'(s[i]) != tolower(s[j]))
return (0);  
}

return (1);  
}
