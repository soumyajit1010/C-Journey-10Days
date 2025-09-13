// Loop Control Statements
#include<stdio.h>
int main(){
    // for loop, while loop, do While loop

    //FOR LOOP

    // i is iterrator, counter
    // for(int i=100; i>=1; i--){
    //     printf("%d \n",i);
    // }

    // increment operator i++, ++i
    // decrement operator i--, --i

    // for(int i=0; i<=10; i++){
    //     printf("%d", i);
    // }
    // printf("\n");

    // for(float i=1.0; i<=5.0; i++){
    //     printf("%f \n", i);
    // }
    // for (char i = 'a'; i <='z'; i++)
    // {
    //     printf("%c ",i);
    // }

    // WHILE LOOP

    // int i=1;
    // while (i<=5)
    // {
    //     printf("Hello coder's! \n");
    //     i++;
    // }

    // Do while loop atleast one time run

    // int i=10;
    // do{
    //     printf("%d \n", i);
    //     i++;
    // } while(i<=20);

    // Q) Print the Sum of First n Natural Numbers;
    // int n;
    // printf("enter a number: ");
    // scanf("%d", &n);
    // int sum=0;
    // for(int  j=n;  j>=1; j--){
    //     sum+=j;
    //     printf("%d\n", j);
    // }
    // printf("Sum is : %d \n", sum);


    // for(int i=1, j=n; i<=n && j>=1; i++,j--){
    //     sum+=i;
    //     printf("%d\n", j);
    // }
    // printf("Sum is : %d \n", sum);


    // for(int i=n; i>=1; i--){
    //     printf("%d\n", i);
    // }


    // multiplication table
    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);
    // for(int i=1; i<=10; i++){
    //     printf("%d \n", n*i);
    // }

    // Keep taking numbers as input from user until user enters an odd number.

    // int n;
    // do{
    //     printf("enter number: ");
    //     scanf("%d", &n);
    //     printf("%d \n", n);
    //     if(n%2!=0){
    //         break;
    //     }
    // }while(1);
    // printf("Thank You!");

    //Keep taking numbers as input from user until user enters a number which is multiple of 7.

    // int n;
    // do{
    //     printf("enter number: ");
    //     scanf("%d", &n);
    //     printf("%d \n", n);
    //     if(n%7==0){
    //         break;
    //     }
    // }while(1);
    // printf("Thank You!");

// break also exit from nested loop;

// continue statement;
    // for(int i=5; i<=50; i++){
    //     if(i%2!=0){
    //         printf("%d\n", i);
    //     }
    // }

// factorial of a number n

    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // int fact=1;
    // for(int i=1; i<=n; i++){
    //     fact=fact*i;
    // }
    // printf("final factorial is %d", fact);

// print multiplication table in reverse order
    // int n;
    // printf("enter number: ");
    // scanf("%d", &n);
    // for(int i=10; i>=1; i--){
    //     printf("%d\n", n*i);
    // }

//Calculate the sum of all numbers between 5 and 50.(including 5 & 50)

    int sum =0;
    for(int i=5; i<=50; i++){
        sum+=i;
    }
    printf("sum is %d", sum);

    


    
    return 0;
}