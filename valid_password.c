#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

/**
 * TODO: Describe what the function does
 * ensures password specifications/limitations
 */
bool valid_password(const char* s) {
    if (s == NULL) {
        return false;
    }

    int len = 0;
    int lower = 0;
    int upper = 0;

    while (s[len] != '\0') {
        char c = s[len];

        if (islower((unsigned char)c)) {
            lower++;
        }
        else if (isupper((unsigned char)c)) {
            upper++;
        }
        else if (!isdigit((unsigned char)c)) {
            return false;
        }

        len++;
    }

    return len >= 6 && len <= 10 && lower >= 2 && upper >= 2;
}
