#include <stdio.h>
/**
 * main -All arguments should be printed, including the first one
 * @argc : mnuber for a commandline arguments
 * @argv :pointer to an array for command line arguments
 * Return :0-success
 */

int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
