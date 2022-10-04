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
		s2 = NULL;
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	size = len1 + len2 + 1;

	c = (char *)malloc(sizeof(char) * size);
	if (c == NULL)
		return (NULL);

	j = 0;
	for (i = 0; *s1 != '\0'; i++)
		*(c + i) = *(s1 + i);
	while (*(s2 + j))
	{
		*(c + i) = *(s2 + j);
		i++;
		j++;
	}
	c[i] = '\0';
	return (c);
}
