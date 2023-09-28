#include "main.h"

/**
 * is_divisible - Checks if a number is divisible by any other number.
 * @n: The number to check for divisibility.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return 0;

	if (n % divisor == 0)
		return 1;

	return is_divisible(n, divisor - 1);
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return 0;

	if (is_divisible(n, n - 1))
		return 0;

	return 1;
}

