/* reverse_string.c */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The input string
 *
 * This function reverses a string in-place.
 *
 * @s: Pointer to the input string to be reversed.
 */
void rev_string(char *s)
{
    char *end, temp;
    int length = 0;

    if (s == NULL)
        return;

    end = s;

    // Calculate the length of the string
    while (*end != '\0')
    {
        length++;
        end++;
    }

    end--; // Point to the last character before the null terminator

    // Swap characters from the beginning and end of the string
    while (s < end)
    {
        temp = *s;
        *s = *end;
        *end = temp;
        s++;
        end--;
    }
}

