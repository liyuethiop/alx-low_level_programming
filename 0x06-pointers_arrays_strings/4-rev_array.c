#include "main.h"
/**
 * reverse_array - will reverse an array
 * @a: is the passed array parameter
 * @n:is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;
	int j = n - 1;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		j++, i++;
	}
}
