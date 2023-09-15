#include "main.h"
/**
 * _isdigit - Check if the character is a digit
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is a digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
