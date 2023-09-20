#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;
	int is_number = 0;

	while (*s != '\0'i)
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		
			digit = *s - '0';
			result = result * 10 + digit;
			is_number = 1;
		}
		else
		
			if (is_number)
				break;
		}

		s++;
	}

	return result * sign;
}

