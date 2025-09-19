//Create an array of size 5(using calloc) & enter its values from the user.

#include <stdio.h>
#include <stdlib.h>  // for calloc and free

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory for 5 integers using calloc
    arr = (int*) calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Take input from user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Display the entered numbers
    printf("You entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 4: Free the allocated memory
    free(arr);

    return 0;
}


//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory for 5 odd numbers
    arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Store first 5 odd numbers
    for (i = 0; i < 5; i++) {
        arr[i] = 2 * i + 1;  // odd numbers: 1, 3, 5, 7, 9
    }

    // Step 3: Print odd numbers
    printf("First 5 odd numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 4: Reallocate memory for 6 even numbers
    arr = (int*) realloc(arr, 6 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Step 5: Store first 6 even numbers
    for (i = 0; i < 6; i++) {
        arr[i] = 2 * (i + 1);  // even numbers: 2, 4, 6, 8, 10, 12
    }

    // Step 6: Print even numbers
    printf("First 6 even numbers: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 7: Free memory
    free(arr);

    return 0;
}
