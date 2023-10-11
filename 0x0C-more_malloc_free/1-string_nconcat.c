#include "main.h"
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
    unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

    // Adjust n to use the entire s2 if n is greater or equal to its length
    if (n >= len2)
        n = len2;

    // Allocate memory for the concatenated string
    char *concatenated = (char *)malloc(len1 + n + 1);
    if (concatenated == NULL)
        return NULL;

    // Copy s1 into concatenated
    if (s1 != NULL)
        strcpy(concatenated, s1);
    else
        concatenated[0] = '\0';


    strncat(concatenated, s2, n);

    return concatenated;
}

