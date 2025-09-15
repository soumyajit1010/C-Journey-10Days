// Pointers

#include <stdio.h>

int main()
{

    // int age =22;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d", _age);

    // int age =22;
    // int *ptr = &age;
    // //printf("%p \n",&age); // address print
    // printf("%u \n",&age);
    // printf("%u \n", ptr);

    // // value print
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0; // x=0

    printf("x=%d\n", x);         // 0
    printf("*ptr = %d\n", *ptr); // 0

    *ptr += 5;
    printf("x=%d\n", x);         // 5
    printf("*ptr = %d\n", *ptr); // 5

    (*ptr)++;
    printf("x=%d\n", x);         // 6
    printf("*ptr = %d\n", *ptr); // 6

    return 0;
}