/*
Make a system that can store information of all
students, teachers & staff of your college in the form
of structures.

You can also make this into a C Project with other
functionalities like cgpa calculation of students,
storing attendance etc.
*/

#include <stdio.h>
#include <string.h>

// Structure for Student
struct Student {
    char name[50];
    int rollNo;
    float cgpa;
    char course[50];
};

// Structure for Teacher
struct Teacher {
    char name[50];
    int empId;
    char subject[50];
    float salary;
};

// Structure for Staff
struct Staff {
    char name[50];
    int staffId;
    char department[50];
    float salary;
};

// Function prototypes
void addStudent(struct Student s[], int *count);
void addTeacher(struct Teacher t[], int *count);
void addStaff(struct Staff st[], int *count);
void displayStudents(struct Student s[], int count);
void displayTeachers(struct Teacher t[], int count);
void displayStaff(struct Staff st[], int count);

int main() {
    struct Student students[100];
    struct Teacher teachers[50];
    struct Staff staff[50];

    int studentCount = 0, teacherCount = 0, staffCount = 0;
    int choice;

    while (1) {
        printf("\n===== College Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Display Students\n");
        printf("5. Display Teachers\n");
        printf("6. Display Staff\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &studentCount); break;
            case 2: addTeacher(teachers, &teacherCount); break;
            case 3: addStaff(staff, &staffCount); break;
            case 4: displayStudents(students, studentCount); break;
            case 5: displayTeachers(teachers, teacherCount); break;
            case 6: displayStaff(staff, staffCount); break;
            case 7: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Add Student
void addStudent(struct Student s[], int *count) {
    printf("\nEnter student name: ");
    scanf("%s", s[*count].name);
    printf("Enter roll number: ");
    scanf("%d", &s[*count].rollNo);
    printf("Enter CGPA: ");
    scanf("%f", &s[*count].cgpa);
    printf("Enter course: ");
    scanf("%s", s[*count].course);
    (*count)++;
    printf("Student added successfully!\n");
}

// Add Teacher
void addTeacher(struct Teacher t[], int *count) {
    printf("\nEnter teacher name: ");
    scanf("%s", t[*count].name);
    printf("Enter employee ID: ");
    scanf("%d", &t[*count].empId);
    printf("Enter subject: ");
    scanf("%s", t[*count].subject);
    printf("Enter salary: ");
    scanf("%f", &t[*count].salary);
    (*count)++;
    printf("Teacher added successfully!\n");
}

// Add Staff
void addStaff(struct Staff st[], int *count) {
    printf("\nEnter staff name: ");
    scanf("%s", st[*count].name);
    printf("Enter staff ID: ");
    scanf("%d", &st[*count].staffId);
    printf("Enter department: ");
    scanf("%s", st[*count].department);
    printf("Enter salary: ");
    scanf("%f", &st[*count].salary);
    (*count)++;
    printf("Staff added successfully!\n");
}

// Display Students
void displayStudents(struct Student s[], int count) {
    printf("\n===== Students =====\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Roll No: %d | CGPA: %.2f | Course: %s\n",
               s[i].name, s[i].rollNo, s[i].cgpa, s[i].course);
    }
}

// Display Teachers
void displayTeachers(struct Teacher t[], int count) {
    printf("\n===== Teachers =====\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Emp ID: %d | Subject: %s | Salary: %.2f\n",
               t[i].name, t[i].empId, t[i].subject, t[i].salary);
    }
}

// Display Staff
void displayStaff(struct Staff st[], int count) {
    printf("\n===== Staff =====\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Staff ID: %d | Department: %s | Salary: %.2f\n",
               st[i].name, st[i].staffId, st[i].department, st[i].salary);
    }
}
