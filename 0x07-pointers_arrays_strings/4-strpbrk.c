#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *match = accept;
        while (*match != '\0')
        {
            if (*s == *match)
                return s;
            match++;
        }
        s++;
    }

    return NULL;
}

