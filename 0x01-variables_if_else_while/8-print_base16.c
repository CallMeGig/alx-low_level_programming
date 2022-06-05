#include <stdio.h>

/**
 * main - Prints all the numbers in base 16 in lowercase.
 *
 * Rreturn (0);
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
