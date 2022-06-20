#include "main.h"

/**
 * _memset - fills memory with constant value
 * @s: pointer to memory location
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	while (size)
	{
		s[size - 1] = b;
		size--;
	}

	return (s);
}
