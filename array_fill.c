#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 * 
 *Fills an array with integers from begin to end
 *returns number of integers in array
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0 || begin > end) {
        return 0;
    }

    int count = 0;

    for (int value = begin; value <= end && count < array_len; value++) {
        array[count++] = value;
    }

    return count;
}

