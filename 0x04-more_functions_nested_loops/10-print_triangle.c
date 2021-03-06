#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of base and height of triangle
 */

void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
