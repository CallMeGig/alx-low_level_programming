#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(48 + i);
	}

	_putchar('\n');
}
