#include "main.h"
/**
 * _strncpy - Copies at most n bytes from src string to dest string.
 *
 * This function copies at most n bytes from src string to dest string.
 * If src has fewer than n bytes, null bytes are appended until n bytes are
 * copied. If src has n or more bytes, no null-terminator is added.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to copy.
 * @n: Maximum number of bytes to copy from src.
 *
 * Returns: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *original_dest = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (original_dest);
}
