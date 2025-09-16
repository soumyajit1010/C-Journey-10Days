#include <stdio.h>

// Write a function to count the number of odd numbers in an array.
int countOdd(int arr[], int n);

// write a funcetin to reverse an array.
int reverse(int arr[], int n);



void printArr(int arr[], int n);


// Function to store a table in a given row
void storeTable(int arr[][10], int n, int m, int number) {
    for (int i = 0; i < m; i++) {
        arr[n][i] = number * (i + 1);  // multiply and store
    }
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // printf("%d", countOdd(arr, 6));

    //int arr[] = {1, 2, 3, 4, 5};
    // printf("%d \n", *(arr + 2));
    // printf("%d \n", *(arr + 5));

//int arr[] = {1, 2, 3, 4, 5};
    // reverse(arr,5);
    // printArr(arr, 5);


// Write a program to store the first n fibonacci numbers.
    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);
    // int fib[n];
    // fib[0]=0;
    // fib[1]=1;
    // for(int i=2; i<n; i++){
    //     fib[i]=fib[i-1]+fib[i-2];
    // }
    // printArr(fib, n);

    // Create a 2D array, storing the tables of 2 & 3.
int tables[2][10];  // 2 rows, 10 columns

    storeTable(tables, 0, 10, 2);  // store table of 2 in row 0
    storeTable(tables, 1, 10, 3);  // store table of 3 in row 1

    // Print tables
    for (int row = 0; row < 2; row++) {
        printf("Table of %d: ", row == 0 ? 2 : 3);
        for (int col = 0; col < 10; col++) {
            printf("%d ", tables[row][col]);
        }
        printf("\n");
    }



    return 0;
}

void printArr(int  arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int fv = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = fv;
    }
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}