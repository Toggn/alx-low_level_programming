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
printf("Size of char: %u bytes(s)\n", sizeof(char));
printf("Size of int: %u bytes(s)\n", sizeof(int));
printf("Size of long int: %u bytes(s)\n", sizeof(long int));
printf("Size of long long: %u bytes(s)\n", sizeof(long long));
printf("Size of float: %u bytes(s)\n", sizeof(float));
return (0);
}

