#include<stdio.h>
/**
 * main -entry
 * Return: 0
 */
int main(void)
{
	printf("size of a char:%zu byte", sizeof(char));
	printf("size of a int:%zu byte", sizeof(int));
	printf("size of a long int:%zu byte", sizeof(long int));
	printf("size of a long long int:%zu byte", sizeof(long long int));
	printf("size of a float:%zu byte", sizeof(float));
	return (0);
}
