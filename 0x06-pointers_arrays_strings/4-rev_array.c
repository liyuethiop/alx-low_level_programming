#include "main.h"
/**
 * reverse_array - will reverse an array
 * @a: is the passed array parameter
 * @n:is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
