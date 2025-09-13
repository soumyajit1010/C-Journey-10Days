#include<stdio.h>
/*
a. Search on what a "nested loop" is & print this
pattern using it.
*****
*****
*****
*****

b. Write a program to check if a number is prime or not.

c. Write a program to print prime numbers in a range.
*/
int main(){
    // for(int i=1; i<=4; i++ ){
    //     for(int i=1; i<=5; i++ ){
    //         printf("*");
    // }
    // printf("\n");
    // }

    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Not prime if divisible
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);







        int low, high, i, j, isPrime;

    printf("Enter lower bound: ");
    scanf("%d", &low);
    printf("Enter upper bound: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (i = low; i <= high; i++) {
        if (i <= 1) continue; // Skip 0 and 1
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");


    return 0;
}