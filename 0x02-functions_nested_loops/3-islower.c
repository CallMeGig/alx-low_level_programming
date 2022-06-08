#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Return: 1 if c is lowercase, else 0.
 */

int i_islower(int c_)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
