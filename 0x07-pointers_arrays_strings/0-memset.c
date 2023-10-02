#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s.
 *
 * @s: Pointer to the memory area.
 * @b: Constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;


while (n > 0)
{
*ptr = b;
ptr++;
n--;
}

return (s);
}