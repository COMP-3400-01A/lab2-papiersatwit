#include <stddef.h> // For NULL
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// TODO: Include any necessary header files here

/**
 * TODO: Describe what the function does
 * return capitalized version of given string
 */
char* capitalize(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    size_t len = strlen(s);

    char* result = malloc(len + 1);
    
    for (size_t i=0; i< len; i++){
        result[i] = (char)toupper((unsigned char)s[i]);
    }
    result[len] = '\0';

    return result;
}

