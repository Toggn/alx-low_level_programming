#include <stdio.h>
#include <math.h>

int main(void) {
long num = 612852475143;
long largestPrimeFactor = 0;

    // Divide by 2 until it's no longer divisiblnum / 2;
}
/ Check for odd factors up to the square root
for (long i = 3; i <= sqrt(num); i = i + 2) {
while (num % i == 0) {
largestPrimeFactor = i;
num = num / i;
}
}

    // If the remaining number is a prime greater than 2
if (num > 2)
largestPrimeFactor = num;

printf("%ld\n", largestPrimeFactor);

return 0;
}

