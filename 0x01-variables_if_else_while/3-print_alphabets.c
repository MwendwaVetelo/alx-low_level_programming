#include <stdio.h>
/**
 * main - the entry point
 * Return: in 0
 */
int main(void)
{
	char v;

	for (v = 'a' ; v <= 'z' ; v++)
		putchar(v);
	for (v = 'A' ; v <= 'Z' ; v++)
		putchar(v);
	putchar('\n');
	return (0);

}
