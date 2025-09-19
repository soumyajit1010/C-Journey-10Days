// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers using calloc
    ptr = (int *) calloc(5, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter numbers (5): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    // Reallocate memory for 8 integers
    ptr = (int *) realloc(ptr, 8 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter 3 more numbers (to make total 8): ");
    for (int i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print all numbers
    for (int i = 0; i < 8; i++) {
        printf("number %d is %d\n", i, ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}




/*

#include <stdio.h>
#include <stdlib.h>  // for malloc, realloc, free

int main() {
    int *ptr;
    int i;

    // Step 1: Allocate memory for 5 integers
    ptr = (int*) malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered (5 numbers): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Step 2: Reallocate memory to hold 8 integers
    ptr = (int*) realloc(ptr, 8 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter 3 more numbers:\n");
    for (i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered (8 numbers): ");
    for (i = 0; i < 8; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Step 3: Free the allocated memory
    free(ptr);

    return 0;
}


*/