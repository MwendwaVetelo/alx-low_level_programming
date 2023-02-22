#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int l, t, c;

	for (l = 0; l < 10; l++)
	{
		for (t = 0; t < 10; t++)
		{
			c = l * t;
			if (t == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && t != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
