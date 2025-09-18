#include <stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu ;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;


int main() {

    coe s1;
    s1.roll=12;
    s1.cgpa=9.2;
    strcpy(s1.name, "Soumya");

    printf("Student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    
    return 0;
}
