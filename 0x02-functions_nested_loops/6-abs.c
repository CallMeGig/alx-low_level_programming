#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Number to be computed
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (0 - n);
}
