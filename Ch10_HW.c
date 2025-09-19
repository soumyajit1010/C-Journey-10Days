
// a. Write a program to read a string from a file &
// output to the user.

// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     char str[100];
//     fptr=fopen("Student.txt","r");
//     if(fptr==NULL){
//         printf("Error opening file!\n");
//         return 1;
//     }
//     fscanf(fptr, "%s", str);
//     printf("String from file: %s\n", str);
//     fclose(fptr);
//     return 0;
// }












// b. Replace the data in file of Q(a) with the number of
// vowels in the string.


// #include <stdio.h>
// #include <string.h>

// int countVowels(char str[]) {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
//             ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     FILE *fptr;
//     char str[100];

//     printf("Enter a string: ");
//     scanf(" %[^\n]", str);   // read full line including spaces

//     // Count vowels
//     int vowels = countVowels(str);

//     // Open file in write mode (overwrite old data)
//     fptr = fopen("Student.txt", "w");
//     if (fptr == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     // Write vowel count into file
//     fprintf(fptr, "Number of vowels: %d\n", vowels);

//     fclose(fptr);

//     printf("File updated successfully!\n");
//     return 0;
// }














// c. Format the information of 5 students (name,
// marks, cgpa, course) in a table like structure in a file.

#include <stdio.h>

struct Student {
    char name[50];
    int marks;
    float cgpa;
    char course[50];
};

int main() {
    FILE *fptr;
    struct Student s[5];

    fptr = fopen("Students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("Course: ");
        scanf("%s", s[i].course);
        printf("\n");
    }

    // Print header of table
    fprintf(fptr, "%-15s %-10s %-10s %-15s\n", "Name", "Marks", "CGPA", "Course");
    fprintf(fptr, "-----------------------------------------------------------\n");

    // Write data in table format
    for (int i = 0; i < 5; i++) {
        fprintf(fptr, "%-15s %-10d %-10.2f %-15s\n",
                s[i].name, s[i].marks, s[i].cgpa, s[i].course);
    }

    fclose(fptr);

    printf("Data of 5 students stored successfully in Students.txt!\n");
    return 0;
}

