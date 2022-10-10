#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: variable of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n, Age: %f\n, Owner: %s", d->name, d->age, d->owner);
}
