#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, -1 otherwise.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return guess;

	if (guess * guess > n)
		return -1;

	return sqrt_recursive(n, guess + 1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	if (n == 0 || n == 1)
		return n;

	return sqrt_recursive(n, 1);
}

