#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d)
{
if (d==NULL)
{
exit(1);
}else
{
printf("Dog name: %s\n", d->name);
printf("Dog age: %f\n", d->age);
printf("Dog owner: %s\n", d->owner);
}

}
