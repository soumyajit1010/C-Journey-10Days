// Multidimentional Arrays

// 2-d arrays

#include <stdio.h>

int main()
{
    // 2 x 3

    int marks[2][3]; // _ _ _  _ _ _
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 90;

    marks[1][0] = 90;
    marks[1][1] = 99;
    marks[1][2] = 70;

    // Find number of rows and columns correctly
    int rows = sizeof(marks) / sizeof(marks[0]);       // 2
    int cols = sizeof(marks[0]) / sizeof(marks[0][0]); // 3

    // Print array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }


    
    

    return 0;
}