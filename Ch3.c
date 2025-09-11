// Conditional Statements

#include<stdio.h>
int main(){
    /*
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age>18){
        printf("adult \n");
    }
    else if (age>13&&age<18)
    {
        printf("teenager \n");
    }
    else{
        printf("child \n");
    }
    printf("thank you");
    */

    /*
    char day;
    printf("Enter day's first character : ");
    scanf("%c", &day);

    switch(day) {
        case 'm':
        case 'M':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'T':
            printf("Thursday\n");
            break;
        case 'f':
        case 'F':
            printf("Friday\n");
            break;
        case 's':
            printf("Saturday\n");
            break;
        case 'S':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input!\n");
    }
    */



    // int marks;
    // printf("enter number(0-100): ");
    // scanf("%d", &marks);

    // if(marks<30){
    //     printf("C \n");
    // }else if (marks>=30&&marks<70){
    //     printf("B \n");
    // }else if(marks >= 70 && marks < 90){
    //     printf("A \n");
    // }else{
    //     printf("A+ \n");
    // }
    
    //marks <= 30 ? printf("Fail \n"): printf("Pass \n");

    // int x=2;
    // if(x=1){
    //     printf("X is equal to 1\n");
    //     printf("%d \n", x);
    // }else{
    //     printf("X is not equal to 1");
    // }

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if(ch>='A'&& ch<='Z'){
        printf("Upper case\n");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lower case \n");
    }else{
        printf("Not a english latter \n");
    }

    
    




    
    return 0;
}