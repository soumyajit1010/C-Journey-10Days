#include <stdio.h>
int main()
{
    /*
    a. Write a program to check if a given number is
Armstrong number or not.
b. Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)
(Search what is Armstrong number)
    */

    int num, original, remainder, n = 0;
    double result = 0.0;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);




    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // if (n >= 1)
    // {
    //     printf("%d is a natural number.\n", n);
    // }
    // else
    // {
    //     printf("%d is not a natural number.\n", n);
    // }

    return 0;
}