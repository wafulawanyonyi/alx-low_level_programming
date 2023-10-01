#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest_ptr);
}

