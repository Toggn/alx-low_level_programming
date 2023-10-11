#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - will store a different value every time you will run this program
 *
 * Description : positive or negative
 *
 * Return : 0 (success)
 */


int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);

}
else if (n == 0)
{
printf("%d  is zero\n ", n);
}
else
{
printf("%d is negative\n ", n);
}

return (0);
}
