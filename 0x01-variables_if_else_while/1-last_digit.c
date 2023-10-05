#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n ,digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
     digit  = n % 10;
	
	if ( digit>5)
	{
	     printf("the string and is greater than 5\n");
	}else if (digit ==0)
	{
	     printf("the string and is 0");
	}else
	{
	     printf("the string and is less than 6 and not 0");
	}
	return (0);
}

