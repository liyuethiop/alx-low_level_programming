#include "main.h"
/**
 * rev_string - will reverse a string
 * @s: is the parameter
 */
void rev_string(char *s)
{
	int i, len, temp;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
