#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - entiry
 * Return: 0
 */

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	int lastdigit;

	lastdigit = n % 10;

	printf("%d Last digit of %d is", n, lastdigit);
	if (lastdigit > n)
		printf("and is greater than 5");
	else if (lastdigit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	return (0);

}
