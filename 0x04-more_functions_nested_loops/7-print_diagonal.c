#include "main.h"

/**
 * print_diagonal - draws a diagonal of n length
 * @n: number of '\' to print
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		j = 0;
		while (j > i)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\');
		if (i < (n - 1))
			_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
