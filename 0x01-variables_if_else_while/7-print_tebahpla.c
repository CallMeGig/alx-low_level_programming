#include <stdio.h>

/**
 * main - Prints the alphabet in reverse order.
 *
 * Return: 0.
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
