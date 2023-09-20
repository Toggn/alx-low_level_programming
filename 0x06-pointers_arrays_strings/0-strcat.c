#include "main.h"
/**
 * _strcat - Concatenates src string to dest string.
 *
 * This function appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to append.
 *
 * Returns: A pointer to the resulting concatenated string (dest).
 */


char *_strcat(char *dest, char *src)
{
char *original_dest = dest;
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
