#include <stdlib.h>
#include <string.h>
#include"main.h"
/**
 * _strdup - Duplicates a string.
 *
 * This function allocates memory for a duplicate of the input string and
 * returns a pointer to the duplicated string.
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
char *duplicate;
size_t len;

if (str == NULL)
return (NULL);


len = strlen(str) + 1;

duplicate = (char *)malloc(len *sizeof(char));

if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);

return (duplicate);

}
