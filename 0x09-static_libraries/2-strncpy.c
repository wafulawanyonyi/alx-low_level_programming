#include "main.h"

/**
 * _strncpy - Copies up to n characters from the source
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n > 0 && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}

