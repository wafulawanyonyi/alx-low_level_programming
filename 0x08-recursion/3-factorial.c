#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which factorial is to be calculated.
 * Return: Factorial of n. If n is lower than 0, return -1 for error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}

