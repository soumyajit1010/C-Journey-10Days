// pointer to pointer

#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    //Print the value of 'i' from its pointer to pointer

    int i=5;
    int *ptr=&i;
    int **pptr = &ptr;
    


    return 0;
}