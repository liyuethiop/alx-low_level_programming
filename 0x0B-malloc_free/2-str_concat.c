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
	int i, j, len = 0;
	char *c = (char *)malloc(sizeof(char) * 2);

	for (i = 0; *s1 != '\0'; i++)
		c[i] = s1[i];
	while (c[len])
		len++;
	while (s2[j])
	{
		c[len] = s2[j];
		len++;
		j++;
	}
	c[len] = '\0';
	return (c);
}
