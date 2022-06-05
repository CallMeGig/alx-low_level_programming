#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		n++;
	}

	return (0);
}
