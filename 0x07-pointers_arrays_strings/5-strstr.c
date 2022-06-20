#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: returns pointer to start of substring else null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
