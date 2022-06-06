#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 0;
	int m, o, p;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			o = 0;
			while (o < 10)
			{
				p = 0;
				while (p < 10)
				{
					if (((n + m) < (o + p) && o >= n) || n > o)
					{
						putchar(48 + n);
						putchar(48 + m);
						putchar(32);
						putchar(48 + o);
						putchar(48 + p);
						if (!(n + m + o + p == 227 && n == 57))
						{
							putchar(44);
							putchar(32);
						}
					}
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
