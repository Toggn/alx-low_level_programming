#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words in string based on specified separators.
 *
 * This function capitalizes the first letter of each word in the string
 * based on the specified separators: space, tabulation, new line, comma,
 * semicolon, period, exclamation mark, question mark, double quote,
 * opening parenthesis, closing parenthesis, opening curly brace,
 *
 * @str: Pointer to the input string.
 *
 * Returns: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
bool capitalize_next = true;

while (str[i] != '\0')
{

if (strchr(" \t\n,;.!?\")(}", str[i]) != NULL)
{
capitalize_next = true;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
capitalize_next = false;
{
else
}
capitalize_next = false;
}
i++;
}

return (str);
}

int main(void)
{
char str[] = "hello, world! how are you?";
printf("Original string: %s\n", str);

cap_string(str);

printf("Capitalized string: %s\n", str);

return (0);
}
