#include "main.h"

/**
 * create_array - creates an array of chars with a specific char
 * @size: size of array
 * @c: char to fill array
 * Return: NULL if size = 0 or fail, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
