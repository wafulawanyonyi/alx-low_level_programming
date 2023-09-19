/* print_reverse.c */

#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 *
 * Description: This function prints a string in reverse order.
 */
void print_rev(char *s)
{
    int length = 0;
    char *end = s;

    if (s == NULL)
        return;

    /* Calculate the length of the string */
    while (*end != '\0')
    {
        length++;
        end++;
    }

    end--; /* Point to the last character before the null terminator */

    /* Print characters from the end to the beginning */
    while (end >= s)
    {
        _putchar(*end); /* Print each character in reverse order */
        end--;
    }

    _putchar('\n'); /* Print a newline after the reversed string */
}

