#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 *
 * This function concatenates the contents of s1 followed by the contents
 * of s2 and returns a pointer to a newly allocated space in memory.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
size_t len_s1 = (s1 != NULL) ? strlen(s1) : 0;
size_t len_s2 = (s2 != NULL) ? strlen(s2) : 0;
size_t total_len = len_s1 + len_s2 + 1;

concatenated = (char *)malloc(total_len * sizeof(char));
if (concatenated == NULL)
return (NULL);

if (len_s1 > 0)
strcpy(concatenated, s1);
if (len_s2 > 0)
strcat(concatenated, s2);

return (concatenated);
}
