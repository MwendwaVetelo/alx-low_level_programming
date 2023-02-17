#include <stdio.h>
/**
 * main - the entry point
 * Return: is 0
 */
int main(void)
{
	char v;

	v = 'z';
	while (v >= 'a')
	{
		putchar(v);
		v--;
	}
	putchar('\n');
	return (0);
}
