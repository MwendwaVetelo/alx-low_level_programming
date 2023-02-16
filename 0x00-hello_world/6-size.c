#include <stdio.h>
/**
 * main - entry point
 *
 * Return: is 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)),\n;
	printf("Size of an int: %lu byte(s)", sizeof(int)), \n;
	printf("Size of a long: %lu byte(s)", sizeof(long int)), \n;
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int)), \n;
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
