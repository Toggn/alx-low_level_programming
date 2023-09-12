#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive, zero, or negative
 *
 * Return: Always 0 (success)
 */
int main(void)

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if  (n>0 )
	printf(" %i is positive", n)
	else if ( n==0 )
	printf("%i is zero", n)
	else ( n<0 )
	printf("%i is positive", n)
	return (0);
}
	
