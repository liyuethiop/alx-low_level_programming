#include<stdio.h>
#include"lists.h"

/**
 * start - will be excuted before main function
 */
void start(void) __attribute__ ((constructor));

void start(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house
			upon my back!\n");
}
