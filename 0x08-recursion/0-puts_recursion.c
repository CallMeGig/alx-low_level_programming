#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i = *s;
	if (i == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(i);
	_puts_recursion(s + 1);
}
