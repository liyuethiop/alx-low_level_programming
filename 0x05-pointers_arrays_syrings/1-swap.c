#include "main.h"
/**
 * swap_int - will swaps the values
 * @a: is the first value
 * @b: is the second value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
