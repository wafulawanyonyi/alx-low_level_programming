#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

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
 * multiply - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the multiplication
 */
int multiply(int a, int b)
{
    return a * b;
}

