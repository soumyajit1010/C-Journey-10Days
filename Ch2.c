// Chapter 2 - Instructions & Operators

#include<stdio.h>
int main(){
    /*
    int a=22;
    int b=a;
    int c=b*6;
    int d=1,e;

    int oldage = 22;
    int years=10;
    int newage=oldage+years;

    int x,y,z;
    x=y=z=4;
    */

    /*
    int a=1,b=2;
    int sum=a+b;
    int multiply=a*b;
    int x,y=a*b;
    printf("sum %d, multiply %d, x %d, y %d" , sum, multiply, x, y);

    printf("%d", 16%10);
    //     printf("%d", 1.6%1.0); --> o/p error
    */

    /*
    printf("%f \n", 2.0*2); // op --> 4.000000 
    printf("%d \n", 2*2);   // op --> 4
    

    int a=(int)1.999999;  // op --> 1
    printf("%d \n", a);
    */

    /*
    int a = 5*2-2*3;
    int b= 5*2/2*3;
    int c=5*(2/2)*3;
    int d=5+2/2*3;

    printf("%d \n",a);
    printf("%d \n",b);
    printf("%d \n",c);
    printf("%d \n",d);
    */

    //Arithmetic Operators --> +, -, *, /, %

    // Relational Operators --> ==, >, >=, <, <=, !=

    //printf("%d \n", 4==4);   // in c true=1 & false=0

    // Logical operators --> &&, ||, !
    // & this is bitwise operator

    /*
    int age, hasTicket;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a ticket? (1 for Yes, 0 for No): ");
    scanf("%d", &hasTicket);

    if ((age >= 18 && hasTicket == 1) || age >= 60) {
        printf("You are allowed entry.\n");
    } else {
        printf("Entry denied.\n");
    }
    */

    // printf("%d \n", !((5>1)&&(3>4)));

    /*
    --------------------------------------------------
    Operator Precedence & Associativity in C
    --------------------------------------------------
    Precedence = which operator is evaluated first
    Associativity = if operators have same precedence,
                    which direction (left-to-right / right-to-left)

    Some common precedence rules (from high to low):

    1. Parentheses ()                [Highest]
    2. Unary operators: !, ++, --, - (right to left)
    3. *, /, %                       (left to right)
    4. +, -                          (left to right)
    5. <, <=, >, >=                  (left to right)
    6. ==, !=                        (left to right)
    7. &&                            (left to right)
    8. ||                            (left to right)
    9. =, +=, -=, *=, /=             (right to left) [Lowest]
    --------------------------------------------------
    */

    //Assignment Operators --> =, +=, -=, *=, /=

    /*
    int a=1;
    int b=4;
    a=a+b;
    b+=a;
    printf("a %d, b %d \n", a, b);
    */

    //a. Write a program to check if a number is divisible by 2 or not.
    /*
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("%d", n%2==0);
    */

    /*
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is Even\n", n);
    } else {
        printf("%d is Odd\n", n);
    }
    */

    /*
    // Are the following statements are valid or not?
    int a=8^8; // valid
    int x; int y=x; //valid
    //int x, int y=x; // not valid
    char star = '**'; // invalid
    */
    /*
    ❌ Invalid
    char holds one character only (like 'A', '1', '*').
    '**' has two characters, which is not allowed.
    */

    /*
    //(a) If it’s Sunday and it’s snowing
    int isSunday = 1;   // 1 = yes, 0 = no
    int isSnowing = 1;  // change to 0 if not snowing
    printf("a. %d\n", (isSunday && isSnowing)); 
    // prints 1 if both true, else 0

    //(b) If it’s Monday or it’s raining
    int isMonday = 1;   // 1 = yes, 0 = no
    int isRaining = 0;  // 1 = raining
    printf("b. %d\n", (isMonday || isRaining)); 
    // prints 1 if either true, else 0

    //(c) If a number is greater than 9 and less than 100 (two-digit number)
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("c. %d\n", (num > 9 && num < 100)); 
    // prints 1 if two-digit, else 0
    */

    
    
    


    return 0;

}