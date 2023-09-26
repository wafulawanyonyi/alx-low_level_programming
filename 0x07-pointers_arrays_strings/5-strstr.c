#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr, *ndl_ptr;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		hay_ptr = haystack;
		ndl_ptr = needle;

		while (*ndl_ptr && *hay_ptr == *ndl_ptr)
		{
			hay_ptr++;
			ndl_ptr++;
		}

		if (*ndl_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

