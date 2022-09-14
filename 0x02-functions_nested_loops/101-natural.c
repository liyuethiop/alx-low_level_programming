#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum += x;
	}
	printf("%i\n", sum);
	return (0);
}
