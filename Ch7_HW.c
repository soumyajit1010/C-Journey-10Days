/*
a. In an array of numbers, find how many times does
a number 'x' occurs.

b. Write a program to print the largest number in an
array.

*/

// #include <stdio.h>
// #include <limits.h>

// int countNum(int arr[], int n, int i);
// int largest(int arr[], int n);

// int main() {

//     int arr[] = {1, 3, 4, 1, 1, 5, 6, 3, 8, 2};
//     printf("1 occurs %d times\n", countNum(arr, 1, 10));

//     printf("Largest number in arr: %d\n", largest(arr, 10));


//     return 0;
// }

// int largest(int arr[], int n){
//     int c=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>c){
//             c=arr[i];
//         }
//     }
//     return c;
// }

// int countNum(int arr[], int n, int i){
//     int c=0;
//     for(int x=0; x<i; x++){
//         if(arr[x]==n){
//             c++;
//         }
//     }
//     return c;
// }



/*
c. Write a program to insert an element at the end of
an array.
*/

#include <stdio.h>

int main() {
    int arr[100];   // array with maximum capacity
    int n, element;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input new element
    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    // Insert at end
    arr[n] = element;
    n++; // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
