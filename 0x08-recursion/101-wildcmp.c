#include "main.h"

/**
 * wildcmp_recursive - Helper function to compare two strings considering * wildcard.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if strings match, 0 otherwise.
 */
int wildcmp_recursive(char *s1, char *s2)
{
    /* If we reach the end of both strings, they match */
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    /* If the characters match or we encounter a * */
    if (*s2 == '*' || *s1 == *s2)
        return wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1);

    return 0;
}

/**
 * wildcmp - Compares two strings considering * wildcard.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    return wildcmp_recursive(s1, s2);
}

