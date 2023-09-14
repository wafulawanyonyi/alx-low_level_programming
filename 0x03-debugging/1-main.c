#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function demonstrates how to create a simple loop
 * without causing an infinite loop.
 *
 * Return: 0 - Always returns 0
 */

int main(void)
{
	int i;

	 printf("Infinite loop incoming :(\n");

	i = 0;

    /* While loop commented out to avoid infinite loop */
    /*
     * while (i < 10)
     * {
     *     putchar(i);
     * }
     */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

