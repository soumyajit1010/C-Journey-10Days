// Strings

#include <stdio.h>

void printString(char arr[]);

int main() {
    // char name[] = {'s', 'o', 'u', 'm','y', 'a','\0'};
    // printf("%s\n",name);

    // char fn[]="Soumyajit";
    // printString(fn);

    // char name[50];
    // scanf("%s", name);
    // printf("Your name is: %s\n",name);

    // char fname[100];
    // scanf("%s", fname);
    // printf("Your name is: %s\n",fname);

    // char str[100];
    // gets(str);
    // puts(str);

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    // char *canChange = "Hello World";
    // puts(canChange);
    // canChange="Hello";
    // puts(canChange);

    /*
    char cannotChange[] = "Hello World";
    puts(cannotChange);
    cannotChange="He";
    */ //-->error

    





    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}