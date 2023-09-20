#include "main.h"

/**
 * print_times_table - Print the times table for a given number up to 15 times.
 * @n: The number for which to print the times table.
 *
 * This function prints the times table for the given number from 0 to 15.
 */
void print_times_table(int n) {
    if (n < 0 || n > 15)
        return;

    int i;
    int result;
    for (i = 0; i <= 15; i++) {
        result = n * i;

        if (result < 10)
            _putchar(result + '0');
        else {
            _putchar((result / 10) + '0');
            _putchar((result % 10) + '0');
        }

        if (i < 15) {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}

