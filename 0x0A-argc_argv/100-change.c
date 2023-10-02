#include <stdio.h>
#include <stdlib.h>  
/**
 * main Write a program that prints the minimum number of coins to make change for an amount of money.
 * @argc : mnuber for a commandline arguments
 * @argv :pointer to an array for command line arguments
 * Return :0-success
 */


int main(int argc, char *argv[]) 
{
int cents = atoi(argv[1]);
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int total_coins = 0;
int i = 0;
if (argc != 2) 
{
printf("Error\n");
return (1);
}
if (cents < 0) 
{
printf("0\n");
return (0);
}
while (cents > 0 && i < num_coins) {
total_coins += cents / coins[i];
cents %= coins[i];
i++;
}
printf("%d\n", total_coins);
return (0);
}

