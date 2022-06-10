#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * and newline
 * Return: void
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
		_putchar(48 + i);
	_putchar('\n');
}
