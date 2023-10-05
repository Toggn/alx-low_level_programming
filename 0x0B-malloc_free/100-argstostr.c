#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * This function concatenates all the arguments passed to a program
 * with each argument followed by a newline character.
 *
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
char *concatenated;
int i, j, k = 0;


if (ac == 0 || av == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}


concatenated = (char *)malloc(total_length *sizeof(char));
if (concatenated == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k++] = av[i][j];
}
concatenated[k++] = '\n';
}

concatenated[k] = '\0';

return (concatenated);
}
