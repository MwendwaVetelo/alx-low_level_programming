#include "main.h"
/**
 * print_last_digit -a function that prints the last digit of a number.
 * @t: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int t)
{
	int y;

	if (t < 0)
		t = t;

	y = t % 10;

	if (y < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
