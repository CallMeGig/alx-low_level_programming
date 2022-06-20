#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for ( ; i < n; i++)
		dest[i] = src[i];

	return (src);
}
