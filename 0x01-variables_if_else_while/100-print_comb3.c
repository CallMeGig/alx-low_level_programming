#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 0;
	int m;

	while (n < 10)
	{
		m = n + 1;
		while (m < 10)
		{
			putchar(48 + n);
			putchar(48 + m);
			if ((n * 10 + m) != 89)
			{
				putchar(',');
                        	putchar(' ');
			}
			m++;
		}		
		n++;
	}

	putchar('\n');

	return (0);
}
