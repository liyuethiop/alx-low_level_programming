#include<stdio.h>
/**
 * main -entry
 * Return: 0
 */
int main(void)
{
	printf("size of a char:\n%zu byte(s) \n", sizeof(char));
	printf("size of a int:\n %zu byte(s) \n", sizeof(int));
	printf("size of a long int:\n %zu byte(s) \n", sizeof(long int));
	printf("size of a long long int:\n %zu byte(s) \n", sizeof(long long int));
	printf("size of a float:\n %zu byte(s) \n", sizeof(float));
	return (0);
}
