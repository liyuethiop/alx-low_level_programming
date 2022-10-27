#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return:the converted nimber
 */
unsigned int binary_to_uint(const char *b)
{
	int n = strlen(b), i;
	unsigned int num = 0, k = 1;

	if (!b)
		return (0);
	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		if (b[i] == '1')
		{
			num += k;
		}
		k *= 2;
	}
	return (num);
}
