// 11. Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));

    // int *ptr;
    // ptr=(int *) malloc(5*sizeof(int));
    // ptr[0] = 1;
    // ptr[1] =2;
    // ptr[2] =23;
    // ptr[3] =222;
    // ptr[4] =2333;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",ptr[i]);
    // }



    // float *ptr;
    // ptr = (float *)malloc(5 * sizeof(float));
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%f\n", ptr[i]);
    // }


    
    //WAP to allocate memory of size n, where n is entered by the user.

    int n;
    int *ptr;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // allocate memory for n integers
    ptr = (int *) calloc(n , sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // printf("Enter %d integers:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &ptr[i]);
    // }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

   

    return 0;
}