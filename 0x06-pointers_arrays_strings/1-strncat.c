#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src string to dest string.
 *
 * This function appends at most n bytes from src string to dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to append.
 * @n: Maximum number of bytes to append from src.
 *
 * Returns: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
while (*dest)
dest++;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (original_dest);
}
