#include<stdio.h>
#include<math.h>
/*
a. Write a function to find sum of digits of a number.

b. Write a function to find square root of a number.

c. Write a function to print "Hot" or "Cold" depending
on the temperature user enters.

d. Make your own pow function.
*/

int sumOfDigits(int num);

double findSquareRoot(double num) {
    return sqrt(num);
}

void checkTemperature(int temp);

int myPow(int base, int exp);


int main(){

    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // int result = sumOfDigits(n);
    // printf("Sum of digits of %d = %d\n", n, result);


    // double n;
    // printf("Enter a number: ");
    // scanf("%lf", &n);
    // printf("Square root of %.2lf = %.2lf\n", n, findSquareRoot(n));


    // int t;
    // printf("Enter temperature: ");
    // scanf("%d", &t);
    // checkTemperature(t);

    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    printf("%d^%d = %d\n", a, b, myPow(a, b));



    return 0;
}

int myPow(int base, int exp){
    int res=1;
    for(int i=1; i<=exp; i++){
        res*=base;
    }
    return res;
}

void checkTemperature(int temp){
    if(temp>=30){
        printf("Hot \n");
    }else{
        printf("Cold \n");
    }
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // extract last digit and add
        num /= 10;       // remove last digit
    }
    return sum;
}