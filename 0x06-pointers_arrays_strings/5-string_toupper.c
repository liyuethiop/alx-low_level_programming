#include "main.h"
/**
 * string_toupper - will change the string to uppercase
 * @ch: is the string to be changed
 * Return: the uppercase
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
	}
	return (ch);
}
