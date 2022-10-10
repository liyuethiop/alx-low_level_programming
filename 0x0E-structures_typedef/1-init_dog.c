#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type
 * @d: the variable of the strucrure
 * @name: member
 * @age: member
 * @owner:mebmer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
