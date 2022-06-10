#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * and newline
 * Return: void
 */

void print_numbers(void)
{
	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
