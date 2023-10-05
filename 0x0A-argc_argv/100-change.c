#include <stdio.h>
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
 * calculate_min_coins - Calculates the minimum number of coins needed
 *                      to make change for a given amount of cents.
 * @cents: The amount of cents for which change needs to be made
 *
 * Return: The minimum number of coins needed
 */
int calculate_min_coins(int cents)
{
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = 0;
    int i;

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    for (i = 0; i < 5; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            num_coins++;
        }
    }

    return num_coins;
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int cents, min_coins;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);
    min_coins = calculate_min_coins(cents);
    printf("%d\n", min_coins);

    return 0;
}

