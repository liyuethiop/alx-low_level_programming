#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: is the argument counter
 * @argv: is the pointer to array of argument
 * Return:0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
