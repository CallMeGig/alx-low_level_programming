#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j, s;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			s = i * j;
			_putchar('0' + s);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((s / 10) == 0)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
