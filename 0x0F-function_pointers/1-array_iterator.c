#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each elemet
 * of an array
 * @array:the array
 * @size: size of the array
 * @action:pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
