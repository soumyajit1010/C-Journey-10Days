#include <stdio.h>
#include <string.h>

// Find the salted form of a password entered
// by user if the salt is "123" & added at the end.
void salting(char password[]);
/*
Write a function named slice, which takes a
string & returns a sliced string from indexntom
*/
void slice(char str[], int n, int m);

// count vowels in a string
int countVowels(char str[]);

// check if given character is present or not
void checkChar(char str[], char ch);


int main()
{
    // char str[100];
    // char ch;
    // int i=0;

    // while(ch!='\n'){
    //     scanf("%c", &ch);
    //     str[i]=ch;
    //     i++;
    // }
    // str[i]='\0';
    // puts(str);

    // char password[100];
    // scanf("%s", password);
    // salting(password);

    // char str[]="HelloWorld";
    // slice(str, 3, 6);

    // char str[] = "Soumyajit";
    // printf("Vowels are: %d\n", countVowels(str));

    char str[] = "Soumyajitaa";
    char ch = 'z';
    checkChar(str, ch);

    return 0;
}
void checkChar(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("chracter is present!");
            return;
        }
    }
    printf("chracter is NOT present!");
}




int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
