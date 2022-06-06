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

	while (n < 10)
	{
		m = n + 1;
		while (m < 10)
		{
			o = m + 1;
			while (o < 10)
			{
				putchar(48 + n);
				putchar(48 + m);
				putchar(48 + o);
				if ((o + n * 100 + m * 10) != 789)
				{
					putchar(',');
					putchar(' ');
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
