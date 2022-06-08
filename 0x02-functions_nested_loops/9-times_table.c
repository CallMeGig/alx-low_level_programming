#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
