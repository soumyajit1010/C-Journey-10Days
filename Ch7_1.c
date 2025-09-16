// Arrays

// contiguous -> continuous

#include <stdio.h>

int main()
{
    // int m1=97;
    // int m2=98;
    // int m3=99;
    // int marks[]={97, 98, 99};

    // int marks[3];
    // char name[10];
    // float price[2];

    // int marks[3];
    // printf("enter phy : ");
    // scanf("%d", &marks[0]);
    // printf("enter chem : ");
    // scanf("%d", &marks[1]);
    // printf("enter math : ");
    // scanf("%d", &marks[2]);
    // printf("phy = %d, chem = %d, math = %d",marks[0], marks[1], marks[2]);

    // Write a program to enter price of 3 items & print their final cost with gst.

    // float price[] = {100.00, 700.00, 99.99};
    // // scanf("%f", &price[0]);
    // // scanf("%f", &price[1]);
    // // scanf("%f", &price[2]);

    // printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
    // printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
    // printf("total price 3 : %f\n", price[2]+(0.18*price[2]));

    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);


    // char star = '*';
    // char *ptr = &star;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);


    // int age = 22;
    // int _age = 23;
    // int *ptr = &age;
    // int *_ptr = &_age;
    // printf("%u, %u difference = %u\n", ptr, _ptr, ptr-_ptr);
    // _ptr=&age;
    // printf("comparison = %u\n", ptr==_ptr);

    /*
    int age = 22;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;
    printf("%u, %u difference = %u\n", ptr, _ptr, ptr-_ptr);
    _ptr=&age;
    printf("comparison = %u\n", ptr==_ptr);
    */ // --> gives error

    int aadhar[5];
    //input
    int *ptr=&aadhar[0];
    for(int i=0;i<5; i++){
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
    }
    //output
    for(int i=0; i<5; i++){
        printf("%d index = %d\n", i, aadhar[i]);
    }




    return 0;
}