//5. Functions & Recursion
// block of code that performs particular task

#include <stdio.h>
// declaration/prototype
/*
void printHello();
void printGoodbye();
void namaste();
void bonjour();
int sum(int a, int b);
void printTable(int n);
*/
void calculatePrice(float v);

int main() {

    //printHello(); // function call
    //printGoodbye();

    // printf("enter f for french & i for indian : ");
    // char ch;
    // scanf("%c", &ch);
    // if(ch=='i'){
    //     namaste();
    // }else{
    //     bonjour();
    // }

    // int a, b;
    // printf("enter first number: ");
    // scanf("%d", &a);
    // printf("enter second number: ");
    // scanf("%d", &b);
    // printf("%d", sum(a,b));


    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printTable(n);

    float value=100.0;
    calculatePrice(value);
    printf("value is: %f\n", value);

    return 0;
}

//function definition

void calculatePrice(float value){
    value=value+(0.18*value);
    printf("final price is: %f\n", value);
}


/*
void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
}

int sum(int a, int b){
    return a+b;
}

void namaste(){
    printf("Nameste\n");
}

void bonjour(){
    printf("Bonjour\n");
}




void printHello(){
    printf("Hello!\n");
}
void printGoodbye(){
    printf("Goodbye:) \n");
}
*/


/*
Argument             v/s      Parameter

values that are passed        values in function
in function call              declaration & definition

used to send value            used to receive value

actual parameter              formal parameters


*) function can only return one value at a time
*/

