#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 * Return: pointer to first character occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (NULL);
}
