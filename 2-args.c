#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_arguments - Prints all arguments received
 * @argc: The number of arguments
 * @argv: Array of argument strings
 */
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
	}
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);

	return 0;
}

