// Structures

#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};



int main() {
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    // s1.name = "Soumya";
    strcpy(s1.name, "Soumya");

    printf("Student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    
    struct student s2;
    s2.roll = 1665;
    s2.cgpa = 9.0;
    strcpy(s2.name, "Soumyajit");

    printf("Student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    
    return 0;
}