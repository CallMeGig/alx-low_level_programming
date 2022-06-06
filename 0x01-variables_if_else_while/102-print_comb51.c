#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 0;
	int m;
	int o;
	int p;

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
					if ((o * 10 + n * 1000 + m * 100 + p) <= 9899)
					{
						putchar(48 + n);
						putchar(48 + m);
						putchar(' ');
						putchar(48 + o);
						putchar(48 + p);
					}
					if ((o * 10 + n * 1000 + m * 100 + p) < 9899)
					{
						putchar(',');
						putchar(' ');
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
