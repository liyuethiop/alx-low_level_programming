#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @argc:1st parameter
 * @argv: 2nd parameter
 */
int main(int argc, char **argv)
{
	printf ("%s", argv[0]);
	return (0);
}
