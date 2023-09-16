#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * prints all single-digit numbers in base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}

