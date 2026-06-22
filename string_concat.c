#include <stddef.h> // For NULL
#include <string.h>
/**
 * TODO: Describe what the function does
 * adds src2 to src1 while staying under cap
 */
void string_concat(char* src1, int src1_cap, const char* src2) {

    if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }

    int len1 = strlen(src1);

    int i = 0;
    while (src2[i] != '\0' && len1 + i < src1_cap - 1) {
        src1[len1 + i] = src2[i];
        i++;
    }

    src1[len1 + i] = '\0';
}

