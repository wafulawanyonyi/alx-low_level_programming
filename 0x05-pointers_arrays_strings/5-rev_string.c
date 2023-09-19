#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		char *start = s;
		char *end = s;

		while (*end != '\0')
		{
			length++;
			end++;
		}

		end--;

		while (start < end)
		{
			char temp = *start;
			*start = *end;
			*end = temp;
			start++;
			end--;
		}
	}
}

