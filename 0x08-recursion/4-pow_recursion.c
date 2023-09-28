#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 * Return: x^y. If y is lower than 0, return -1 for error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

