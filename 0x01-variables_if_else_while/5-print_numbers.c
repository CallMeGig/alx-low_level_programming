#include <stdio.h>

/**
 * main - Prints all single base 10 digits smaller than 10 starting from 0.
 *
 * Return: 0.
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
