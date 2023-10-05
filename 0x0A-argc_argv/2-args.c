#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return putchar(c);
}

/**
 * print_arguments - Prints all arguments received, one per line
 * @argc: The number of arguments
 * @argv: An array of argument strings
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

