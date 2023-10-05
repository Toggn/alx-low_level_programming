#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 *
 * This function splits a string into words based on spaces and returns
 * an array of strings, each containing a single word, null-terminated.
 *
 * @str: Input string to be split.
 *
 * Return: Pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str) 
{
int i, j,word_count;
char **words;
if (str == NULL || *str == '\0')
return (NULL);

word_count = 0;



for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
}

if (word_count == 0)
return (NULL);

words = (char **)malloc((word_count + 1) *sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
j = 0;

while (str[i] != '\0') 
{
if (str[i] != ' ') 
{
int word_length = 0;


while (str[i] != ' ' && str[i] != '\0') 
{
word_length++;
i++;
}


words[j] = (char *)malloc((word_length + 1) *sizeof(char));
if (words[j] == NULL) 
{

for (i = 0; i < j; i++)
free(words[i]);
free(words);
return (NULL);
}


strncpy(words[j], str + i - word_length, word_length);
words[j][word_length] = '\0';
j++;
} else 
{
i++;
}
}

words[j] = NULL;

return (words);
}

