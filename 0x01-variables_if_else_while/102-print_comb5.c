#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n, m, o, p;

	n = 0;
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
					if (((n <= o) && (m < p)) || n < o)
					{
						putchar(48 + n);
						putchar(48 + m);
						putchar(32);
						putchar(48 + o);
						putchar(48 + p);
						if (n + m + o + p == 35 && n == 9)
						{
							putchar('\n');
						}
						else
						{
							putchar(',');
							putchar(' ');
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
	return (0);
}
