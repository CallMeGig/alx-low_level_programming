#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Character to check.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
