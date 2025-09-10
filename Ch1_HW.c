#include <stdio.h>

int main() {
    // Q1: Program to calculate perimeter of a rectangle
    int a, b, p;
    printf("Enter a side of rectangle: ");
    scanf("%d", &a);

    printf("Enter another side of rectangle: ");
    scanf("%d", &b);

    // Formula: Perimeter = 2 * (a + b)
    p = 2 * (a + b);
    printf("Perimeter of rectangle: %d\n", p);

    // Q2: Program to calculate cube of a number
    int n, cube;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Formula: Cube = n * n * n
    //cube = n * n * n;
    //printf("Cube of this number is: %d\n", cube);
    printf("Cube of this number is: %d\n", n * n * n);

    return 0; // return success status
}
