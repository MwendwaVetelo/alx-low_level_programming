#include <stdio.h>
/**
 *main - entry point
 *Return: is 0
 */
int main(void)
{
	int v;

	for (v = '0' ; v <= 9 ; v++)
		putchar(v + '0');
	putchar('\n');
	return (0);
}
