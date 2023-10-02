#include <stdio.h>
#include <stdlib.h>
/**
 * main -Write a program that adds positive numbers.
 * @argc : mnuber for a commandline arguments
 * @argv :pointer to an array for command line arguments
 * Return :0-success
 */
 
int main(int argc, char *argv[]) 
{
int sum = 0;
int i = 1;
if (argc < 2) 
{
printf("0\n");
return (0);
}
while (i < argc) 
{
int j = 0;
while (argv[i][j] != '\0') 
{
if (argv[i][j] < '0' || argv[i][j] > '9') 
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}

