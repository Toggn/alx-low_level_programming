#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number.
 *
 * This function calculates the factorial of a non-negative integer.
 * Factorial of 0 is considered 1.
 * If n is negative, the function returns -1 to indicate an error.
 *
 * @n: The input number.
 *
 * Returns: The factorial of the input number, or -1 if n is negative.
 */
int factorial(int n)
{
if (n == 0)
return (1);

else if (n < 0)
return (-1);
else
return (n) * factorial(n - 1);
}
