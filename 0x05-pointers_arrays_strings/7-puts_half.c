#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = 0, start, i;

		while (str[length] != '\0')
			length++;

		start = (length + 1) / 2;

		for (i = start; i < length; i++)
			_putchar(str[i]);

		_putchar('\n');
	}
}

