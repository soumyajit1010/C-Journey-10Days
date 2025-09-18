#include <stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main() {

    struct student ece[100];
    ece[0].roll=1664;
    ece[0].cgpa=9.2;
    strcpy(ece[0].name, "Soumya");

    printf("Student name = %s\n", ece[0].name);
    printf("student roll no = %d\n", ece[0].roll);
    printf("student cgpa = %f\n", ece[0].cgpa);

    struct student s1 = {1664, 9.2, "Soumyajit"};

    printf("Student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student *ptr = &s1;
    printf("student roll with ptr = %d\n", (*ptr).roll);

    printf("student->roll = %d\n", ptr->roll);



    
    return 0;
}