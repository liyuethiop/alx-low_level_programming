#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name:member
 * @age:member
 * @owner:member
 * Return:x;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(*x));

	if (x == NULL)
		return (NULL);
	x->name = name;
	x->age = age;
	x->owner = owner;
	return (x);
}
