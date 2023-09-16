#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * prints all single-digit numbers in ascending order,
 * separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

