#include <stdio.h>
# include<string.h>

int countLength(char arr[]);

int main() {
    // Make a program that inputs user's name & prints its length.
    // char name[100];
    // fgets(name, 100, stdin);
    // printf("length is: %d", countLength(name));

    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";
    // strcpy(newStr, oldStr);
    // puts(newStr);


    // char fstr[100] = "Hello ";
    // char secStr[] = "World";
    // strcat(fstr, secStr);
    // puts(fstr);

    // char fstr[] ="Apple";
    // char sstr[] = "Banana";
    // printf("%d", strcmp(fstr,sstr));

    





    return 0;
}

int countLength(char ch[]){
    int count =0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count-1;
}