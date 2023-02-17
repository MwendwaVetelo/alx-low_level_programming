#include <stdio.h>
/**
 * main - the entry point
 * Return: is 0
 */
int main(void)
{
	char v;

	for (v = 'a' ; v <= 'z' ; v++)
		if (v != 'q' && v != 'e')
			putchar(v);
	putchar('\n');
	return (0);
}
