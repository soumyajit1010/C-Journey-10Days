#include <stdio.h>
//Make a program to input student information from a user & enter it to a file.
int main() {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");  // open file for writing

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1; // exit with error
    }

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);   // no & here

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    // write data to file
    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%.2f\n", cgpa);

    fclose(fptr); // correct function

    printf("Data saved to Student.txt\n");
    return 0;
}
