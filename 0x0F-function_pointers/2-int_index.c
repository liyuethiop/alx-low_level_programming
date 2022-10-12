#include "function_pointers.h"
/**
 * int_index  - searches for an integer
 * @array: the array to be searched
 * @size:size of the array
 * @cmp:function pointer
 * Return: index of the first element for which the
 * cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
	}
	return (0);
}
