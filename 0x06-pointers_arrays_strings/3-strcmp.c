#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 *
 * This function compares two strings and returns an integer indicating their
 * relationship:
 *   - Returns 0 if the strings are equal.
 *   - Returns a negative value if s1 is less than s2.
 *   - Returns a positive value if s1 is greater than s2.
 *
 * @s1: Pointer to the first string for comparison.
 * @s2: Pointer to the second string for comparison.
 *
 * Returns: An integer indicating the comparison result.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
