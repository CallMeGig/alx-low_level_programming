#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */

int jack_bauer(void)
{
	int n, m, o, p, total;

	n = 0;
	while (n < 3)
	{
		m = 0;
		while ((n < 2 && m < 10) || (n == 2 && m < 5))
		{
			o = 0;
			while (o < 7)
			{
				p = 0;
				while (p < 10)
				{
					_putchar(48 + n);
					_putchar(48 + m);
					_putchar(':');
					_putchar(48 + o);
					_putchar(48 + p);
					_putchar('\n');
					p++;
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
