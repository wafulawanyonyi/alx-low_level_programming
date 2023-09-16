#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * it  prints the lowercase alphabet, followed by the uppercase alphabet,
 * and then a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

