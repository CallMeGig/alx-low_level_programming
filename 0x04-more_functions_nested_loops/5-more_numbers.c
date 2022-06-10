#include "main.h"

/**
 * more_numbers - prints range 0 to 14 times 10
 */

void more_numbers(void)
{
	int i;

	for (i = 0; 1 < 15; i++)
	{
		if (i > 9)
			_putchar(48 + (i / 10));
		_putchar(48 + (i % 10));
	}
}
