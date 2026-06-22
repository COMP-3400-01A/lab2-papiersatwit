#include <stddef.h> // For NULL
#include <stdlib.h>
// TODO: Include any necessary header files here

/**
 * TODO: Describe what the function does
 * creates array containing even numbers from begin to end
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) {
        return NULL;
    }

    int first = (begin % 2 == 0) ? begin : begin + 1;

    if (first > end) {
        return NULL;
    }

    int count = ((end - first) / 2) + 1;

    int* array = malloc(count * sizeof(int));

    for (int i = 0; i < count; i++) {
        array[i] = first + (2 * i);
    }

    return array;
}
