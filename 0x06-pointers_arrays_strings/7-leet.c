#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char *leet_table = "aAeEoOtTlL";
    char *leet_replacements = "4433007711";

    while (*ptr != '\0')
    {
        int i;
        int found = 0;

        for (i = 0; leet_table[i] != '\0'; i++)
        {
            if (*ptr == leet_table[i])
            {
                *ptr = leet_replacements[i];
                found = 1;
                break;
            }
        }

        if (!found)
            ptr++;
    }

    return str;
}

