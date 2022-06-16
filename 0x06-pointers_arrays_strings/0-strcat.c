#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended on
 * @src: string to be appended
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
