/* reverse_string.c */

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The input string
 *
 * Description: This function reverses a string.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int length = 0;
	char *end = s;

	/* Calculate the length of the string */
	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--; /* Point to the last character before the null terminator */

	/* Swap characters from the beginning and end of the string */
	while (s < end)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}

