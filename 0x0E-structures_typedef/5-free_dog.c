#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d:variable of structure
 */

void free_dog(dog_t *d)
{
	free(d);
}
