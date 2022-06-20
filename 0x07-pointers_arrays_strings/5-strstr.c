#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: returns pointer to start of substring else null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, match;

	while (haystack[i] != '\0')
	{
		j = i;
		while (match)
		{
			if (haystack[j] != needle[j]
				&& needle[j] != '\0')
				match = 1;
			else
				match = 0;
		}
		if (match)
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}
