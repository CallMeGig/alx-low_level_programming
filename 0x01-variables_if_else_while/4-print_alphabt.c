#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without q or e.
 *
 * Return: 0.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != q) && (c != e))
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
