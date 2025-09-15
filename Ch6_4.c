// Swap 2 numbers, a & b.
/*
#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x=3, y=5;
    // swap(x,y);
    // printf("x=%d & y= %d\n", x, y);
    _swap(&x,&y);
    printf("x=%d & y= %d\n", x, y);

    return 0;
}

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b= %d\n", a, b);
}
void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d & b= %d\n", *a, *b);
}
    */


//will the address output be same?
/*
#include <stdio.h>

void printAddress(int n);

int main() {
    int n = 4;
    printf("%p\n", &n);   // address of n in main
    printAddress(n);      // function call
    return 0;
}

void printAddress(int n) {
    printf("%p\n", &n);   // address of n in function
}
*/


// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include <stdio.h>

// Function prototype
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;

    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;
}

// Function definition
void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}
