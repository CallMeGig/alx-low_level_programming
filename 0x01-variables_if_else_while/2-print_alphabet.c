#include <stdio.h>

/**
 * main - Prints the alphabet followed by a newline character.
 *
 * Return: 0.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
