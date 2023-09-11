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
printf("Size of char: %lu bytes(s)\n", sizeof(char));
printf("Size of int: %lu bytes(s)\n", sizeof(int));
printf("Size of long: %lu bytes(s)\n", sizeof(long));
printf("Size of long long: %lu bytes(s)\n", sizeof(long long));
printf("Size of float: %lu bytes(s)\n", sizeof(float));
printf("Size of double: %lu bytes(s)\n", sizeof(double));
printf("Size of long double: %lu bytes(s)\n", sizeof(long double));

return (0);
}

