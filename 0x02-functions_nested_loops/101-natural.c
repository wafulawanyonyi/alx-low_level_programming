#include <stdio.h>

/**
 * calculateSum - Calculates the sum of all multiples of 3 or 5 below the given limit.
 * @limit: The upper limit (excluded) to calculate the sum for.
 *
 * Return: The sum of all multiples of 3 or 5 below the given limit.
 */
int calculateSum(int limit)
{
	int sum = 0;

	for (int i = 1; i < limit; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

int main(void)
{
	int limit = 1024;
	int sum = calculateSum(limit);

	printf("The sum of all multiples of 3 or 5 below %d is: %d\n", limit, sum);

	return 0;
}

