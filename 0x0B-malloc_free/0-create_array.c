#include "main.h"
#include <stdlib.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success, returns a pointer to the character written.
 * On error, returns NULL and sets errno appropriately.
 */
char *_putchar(char __attribute__((unused)) c)
{
    /* Implement _putchar according to your requirements */
	return (NULL);  /* Placeholder, you need to implement this function */
}

/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;

	return (arr);
}

