/*
a. Write a program in C to find the maximum number
between two numbers using a pointer.

b. Write a program in C to print the elements of an
array in reverse order.

c. Write a program in C to print all the letters in english
alphabet using a pointer.
*/

// #include <stdio.h>

// int main() {
//     int a, b;
//     int *p1, *p2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     p1 = &a;
//     p2 = &b;

//     if (*p1 > *p2) {
//         printf("Maximum = %d\n", *p1);
//     } else {
//         printf("Maximum = %d\n", *p2);
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p;

//     p = &arr[4];  // point to last element

//     printf("Array in reverse order:\n");
//     for (int i = 4; i >= 0; i--) {
//         printf("%d ", *p);
//         p--;  // move pointer backwards
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     char alphabet[26];
//     char *p;

//     // fill array with letters
//     for (int i = 0; i < 26; i++) {
//         alphabet[i] = 'A' + i;
//     }

//     p = alphabet;

//     printf("English Alphabets:\n");
//     for (int i = 0; i < 26; i++) {
//         printf("%c ", *(p + i));
//     }

//     return 0;
// }
