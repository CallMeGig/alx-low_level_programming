#include "main.c"

/**
 * print_line - prints '_' n times to draw a line
 * @n: number of '_'s to print
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
