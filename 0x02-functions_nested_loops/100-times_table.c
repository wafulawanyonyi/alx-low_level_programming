#include <stdio.h>

void print_times_table(int n);

/**
 * print_times_table - Print the times table for a given number up to 15 times.
 * @n: The number for which to print the times table.
 *
 * This function prints the times table for the given number from 0 to 15.
 */

void print_times_table(int n) {
	int i;

	if (n < 0 || n > 15) {
		printf("n is out of valid range (0 to 15).\n");
		return;
	}

	printf("Times Table for %d:\n", n);

	for (i = 0; i <= 15; i++) {
		printf("%d x %d = %d\n", i, n, i * n);
	}
}

int main() {
	int n;

	printf("Enter a value for n: ");
	scanf("%d", &n);

	print_times_table(n);

	return 0;
}

