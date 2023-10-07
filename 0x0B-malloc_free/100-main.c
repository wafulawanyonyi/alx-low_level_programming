#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *argstostr(int ac, char **av);

#endif /* MAIN_H */

#include <stdlib.h>
#include "main.h"

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
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: Array of argument strings
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int total_length;
    int i, j, k;
    char *concatenated;

    if (ac == 0 || av == NULL)
        return NULL;

    total_length = 0;

    /* Calculate total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            total_length++;
            j++;
        }
        total_length++;  /* For '\n' after each argument */
    }

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc((total_length + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    /* Concatenate arguments with '\n' between them */
    k = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            concatenated[k++] = av[i][j++];
        }
        concatenated[k++] = '\n';
    }

    concatenated[k] = '\0';

    return concatenated;
}

