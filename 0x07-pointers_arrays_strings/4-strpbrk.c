#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to be searched
 * @accept: accepted bytes to find
 * Return: pointer to matching byte else null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
			j++;
			
		}
		i++
	}

	return (NULL);
}
