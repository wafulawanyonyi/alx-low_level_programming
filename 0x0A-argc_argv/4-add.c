#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: The character written
 */
int _putchar(char c)
{
	return putchar(c);
}

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * add_positive_numbers - Adds positive numbers passed as arguments
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: The sum of positive numbers or 0 if no positive numbers are found
 */
int add_positive_numbers(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			int num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return 1;
		}
	}

	return sum;
}

int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("0\n");
		return 0;
	}

	result = add_positive_numbers(argc, argv);
	if (result != 1)
		printf("%d\n", result);

	return result;
}

