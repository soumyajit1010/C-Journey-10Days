//  free the memory allocated with calloc

#include <stdio.h>
#include <stdlib.h>  // for calloc and free

int main() {
    int n;
    int *ptr;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // allocate memory for n integers using calloc
    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // free the allocated memory
    free(ptr);

    return 0;
}
