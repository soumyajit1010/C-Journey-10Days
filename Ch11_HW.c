// a. Search about what is a 'dangling pointer' in C.
/*
A dangling pointer is a pointer that continues to point to a memory location after that memory has been freed or gone out of scope.

Accessing a dangling pointer can cause undefined behavior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 42;

    free(ptr);   // Memory freed
    printf("%d\n", *ptr);  // ❌ Dangling pointer (undefined behavior)

    ptr = NULL;  // ✅ Best practice: avoid dangling pointers
    return 0;
}







// b. Allocate memory for 500 integers using calloc &
// then store first 500 natural numbers in that space.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i;

    // Allocate memory for 500 integers using calloc
    arr = (int*) calloc(500, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store first 500 natural numbers
    for (i = 0; i < 500; i++) {
        arr[i] = i + 1;
    }

    // Print first 10 numbers as sample
    printf("First 10 natural numbers: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free allocated memory
    return 0;
}








// c. Search about what is 'memory leak' in C.

#include <stdlib.h>
/*
A memory leak occurs when you allocate memory using malloc, calloc, or realloc but forget to free it with free().
Over time, this reduces available memory.
*/
void func() {
    int *ptr = (int*) malloc(100 * sizeof(int));
    // ❌ Memory not freed → memory leak
}
/*
Solution: Always use free(ptr); when memory is no longer needed.
*/












// d. Search & find out which is better malloc( ) or calloc ( ).
/*
| Feature            | `malloc()`                                                | `calloc()`                                              |
| ------------------ | --------------------------------------------------------- | ------------------------------------------------------- |
| **Initialization** | Does **not** initialize memory (contains garbage values). | Initializes memory with **0**.                          |
| **Arguments**      | Takes **1 argument** (total size in bytes).               | Takes **2 arguments** (`num_elements`, `size_of_each`). |
| **Speed**          | Faster (no initialization).                               | Slightly slower (zero-initialization).                  |
| **Use Case**       | When you don’t care about initial values.                 | When you need clean, zeroed memory.                     |


👉 Better depends on need:

Use malloc() for speed when initialization isn’t required.

Use calloc() when you need initialized (zero) memory.
*/
