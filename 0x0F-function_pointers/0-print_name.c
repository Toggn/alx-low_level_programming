#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 *@name : a string name
 * @f the function pointer
 * Return : void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}


