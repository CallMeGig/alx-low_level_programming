#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: Number to be checked
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
