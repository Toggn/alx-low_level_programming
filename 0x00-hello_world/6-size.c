#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a line with the sizeof  function
 *
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of char: %d  bytes(s)\n", sizeof(char));
printf("Size of int: %d  bytes(s)\n", sizeof(int));
printf("Size of long: %d bytes(s)\n", sizeof(long));
printf("Size of long long: %d bytes(s)\n", sizeof(long long));
printf("Size of float: %d bytes(s)\n", sizeof(float));
printf("Size of double: %d bytes(s)\n", sizeof(double));
printf("Size of long double: %d bytes(s)\n", sizeof(long double));

return (0);
}

