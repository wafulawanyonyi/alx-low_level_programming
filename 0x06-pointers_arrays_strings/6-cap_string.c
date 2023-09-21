#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c) {
    char separators[] = " \t\n,;.!?\"(){}";
    int i;
    for (i = 0; separators[i] != '\0'; i++) {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str) {
    int capitalize_next = 1;  // Flag to determine if the next character should be capitalized

    while (*str != '\0') {
        if (is_separator(*str)) {
            capitalize_next = 1;  // Next character should be capitalized
        } else if (capitalize_next && *str >= 'a' && *str <= 'z') {
            *str -= ('a' - 'A');  // Capitalize the current character
            capitalize_next = 0;  // Reset the flag
        } else if (!capitalize_next && *str >= 'A' && *str <= 'Z') {
            *str += ('a' - 'A');  // Convert the current character to lowercase
        }

        str++;
    }

    return str;
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";

    // Output the modified string
    char *ptr = str;
    while (*ptr != '\0') {
        _putchar(*ptr);
        ptr++;
    }

    return (0);
}

