// Pointers in function call

#include <stdio.h>

void square(int n);
void _square(int* n);

int main() {

    int n=4;

    square(n);
    printf("number =%d\n", n);
    
    _square(&n);
    printf("number =%d\n", n);
    
    return 0;
}

void square(int n){
    n=n*n;
    printf("square = %d\n", n);
}
void _square(int* n){
    *n=(*n)*(*n);
    printf("square = %d\n", *n);
}