#include "main.h"

/**
 * print_alphabet - Function to print the alphabet from 'a' to 'z' with a newline at the end
 *
 * Return: Nothing (void)
 */
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}



void print_alphabet(void)

{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n'); 
}

