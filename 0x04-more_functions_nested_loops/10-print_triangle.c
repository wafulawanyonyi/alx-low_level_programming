#include "main.h"

/**
 * print_triangle - Prints a triangle of specified size
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 1; i <= size; i++)
	{
	for (j = 0; j < i; j++)
	_putchar('#');

	_putchar('\n');
	}
}

