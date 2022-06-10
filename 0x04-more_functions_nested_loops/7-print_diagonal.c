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
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
