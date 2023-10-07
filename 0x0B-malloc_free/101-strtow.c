#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), NULL on failure
 */
char **strtow(char *str)
{
    if (str == NULL || str[0] == '\0')
        return NULL;

    int i, j, word_count = 0;
    char **words;
    int in_word = 0; // Flag to track if we are inside a word

    // Count the number of words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (in_word)
                word_count++;
            in_word = 0;
        } else {
            in_word = 1;
        }
    }
    // Count the last word if the string doesn't end with a space
    if (in_word)
        word_count++;

    if (word_count == 0)
        return NULL;

    // Allocate memory for the array of words
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_length;
    in_word = 0;
    j = 0; // Index for the words array

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (in_word) {
                words[j] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[j] == NULL) {
                    // Free previously allocated memory on failure
                    for (i = 0; i < j; i++)
                        free(words[i]);
                    free(words);
                    return NULL;
                }

                // Copy the word into the array
                for (int k = 0; k < word_length; k++)
                    words[j][k] = str[i - word_length + k];
                words[j][word_length] = '\0';
                j++;
            }
            in_word = 0;
        } else {
            if (!in_word) {
                word_length = 0;
            }
            word_length++;
            in_word = 1;
        }
    }

    // Process the last word
    if (in_word) {
        words[j] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[j] == NULL) {
            // Free previously allocated memory on failure
            for (i = 0; i <= j; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        for (int k = 0; k < word_length; k++)
            words[j][k] = str[i - word_length + k];
        words[j][word_length] = '\0';
        j++;
    }

    words[j] = NULL; // Set the last element to NULL

    return words;
}

