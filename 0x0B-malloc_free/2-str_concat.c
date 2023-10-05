#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
    int len_s1 = 0, len_s2 = 0;
    int i;
    char *concatenated;

    /* Treat NULL as an empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len_s1])
        len_s1++;
    while (s2[len_s2])
        len_s2++;

    /* Allocate memory for concatenated string */
    concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    /* Copy contents of s1 to concatenated */
    for (i = 0; i < len_s1; i++)
        concatenated[i] = s1[i];

    /* Copy contents of s2 to concatenated */
    for (i = 0; i < len_s2; i++)
        concatenated[len_s1 + i] = s2[i];

    /* Null-terminate the concatenated string */
    concatenated[len_s1 + len_s2] = '\0';

    return concatenated;
}

