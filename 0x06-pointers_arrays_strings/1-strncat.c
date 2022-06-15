#include "main.h"

/**
 * _strncat - concatenates a two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: no characters to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] < src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
