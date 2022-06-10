#include "main.h"

/**
 * more_numbers - prints range 0 to 14 times 10
 */

void more_numbers(void)
{
	int j = 0, i;
	
	while (j <= 10)
	{
		i = 0;
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
		}
		_putchar('\n');
		j++;
	}
}
