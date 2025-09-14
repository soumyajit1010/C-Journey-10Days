// Recursion
#include <stdio.h>
void printHello(int c);
void sumNatural(int i, int s);
int fact(int n);
float convertTemp(float celsious);
int calPercentage(int s, int m, int sa);
int fibonacci(int n);

int main() {
    
    // printHello(1);
    // sumNatural(5,0);
    // printf("Factorial is: %d", fact(5));
    // float far = convertTemp(37);
    // printf("far: %f", far);

    // int s=98;
    // int m=95;
    // int sa=99;
    // printf("Parecentage is: %d", calPercentage(s,m,sa));

    printf("nth fibonacci number: %d\n",fibonacci(5));


    



    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fn=fibonacci(n-1);
    int fnn=fibonacci(n-2);
    return fn+fnn;

}


int calPercentage(int s, int m, int sa){
    return ((s+m+sa)/3);
}


float convertTemp(float celsius){
    int far = celsius*(9.0/5.0)+32;
    return far;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}

void printHello(int c){
    if (c>5){
        return;
    }
    printf("HelloWorld!\n");
    printHello(c+1);
}

void sumNatural(int i, int s){
    if(i==0){
        printf("Sum of n natural numbers: %d\n", s);
    }
    sumNatural(i-1,i+s);
}