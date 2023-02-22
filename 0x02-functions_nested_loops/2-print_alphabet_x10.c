#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase
 */
void print_alphabet_x10(void)
{
	char y;
	int i;

	i = 0;

	while (i < 10)
	{
		y = 'a';
		while (abc <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		i++;
	}
}
