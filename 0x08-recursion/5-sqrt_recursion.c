#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * This function calculates the natural square root of a non-negative integer.
 * If the input number does not have a natural square root, the function returns -1.
 *
 * @n: The input number.
 *
 * Returns: The natural square root of the input number, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
else {
int i = 1;
while (i * i <= n)
{
if (i * i == n)
return (i);
i++;
}
return _sqrt_recursion(n - 1);  
}
}
