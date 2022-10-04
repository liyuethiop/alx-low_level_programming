#include "main.h"
#include <stdlib.h>
/**
 * str_concat - will concatinet two strings
 * @s1:is the first string and
 * @s2:is the second
 * Return: newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size, len1 = 0, len2 = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;
	size = len1 + len2;

	c = malloc(sizeof(char) * size);
	if (c == NULL)
		return (NULL);

	j = 0, i = 0;
	while (i < len1)
	{
		*(c + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(c + i) = *(s2 + j);
		i++;
		j++;
	}
	return (c);
}
