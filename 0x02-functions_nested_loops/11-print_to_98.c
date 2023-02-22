#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int q, w;

	if (n <= 98)
	{
		for (q = n; q <= 98; q++)
		{
			if (q != 98)
				printf("%d, ", q);
			else if (q == 98)
				printf("%d\n", q);
		}
	} else if (n >= 98)
	{
		for (w = n; w >= 98; w--)
		{
			if (w != 98)
				printf("%d, ", w);
			else if (w == 98)
				printf("%d\n", w);
		}
	}
}

