#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number.
 *
 * This function checks whether the input integer is a prime number or not.
 * A prime number is a positive integer greater than 1 that has no positive integer
 * divisors other than 1 and itself.
 *
 * @n: The input integer.
 *
 * Returns: 1 if the input integer is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
int i;

if (n <= 1)
return (0);


for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
return (0); 
}

return (1); 
}
