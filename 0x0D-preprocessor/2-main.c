#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @argc:1st parameter
 * @argv: 2nd parameter
 * Return:0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
