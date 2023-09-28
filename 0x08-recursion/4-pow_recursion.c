#include <stdio.h>
#include "main.h"


/**
 * _pow_recursion - Calculates x raised to the power of y.
 *
 * This function calculates the value of x raised to the power of y recursively.
 * If y is negative, the function returns -1 to indicate an error.
 *
 * @x: The base number.
 * @y: The exponent.
 *
 * Returns: The result of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

else if (y == 0)
return (1);
else
return x * _pow_recursion(x, y - 1);  
}
