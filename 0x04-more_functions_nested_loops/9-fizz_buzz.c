#include <stdio.h>i
/**
 * Print "FizzBuzz" for multiples of both 3 and 5
 *
 * Print "Fizz" for multiples of 3
 *
 * Print "Buzz" for multiples of 5
 *
 *  Print the number if not a multiple of 3 or 5
 *
*/


int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}                                                                                                     11,3          Tp
