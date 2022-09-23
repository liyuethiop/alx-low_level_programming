#include "main.h"
/**
 * _strcmp - will compare two strings
 * @s1: is the first string to compare and
 * @s2:is the second
 * Return: 0 if they are similar
 * <0 and >0 if one is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
