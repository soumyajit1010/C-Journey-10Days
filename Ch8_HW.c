/*
a. Write a program to convert all lowercase vowels to
uppercase in a string.

b. Write a program to print the highest frequency
character in a string.

c. Write a program to remove blank spaces in a string.

d. Write a program to replace lowercase letters with
uppercase & vice versa in a string.
*/

#include <stdio.h>
#include <ctype.h>  // for islower, isupper, toupper, tolower

void convertVowels(char str[]);
void removeSpaces(char str[]);
void toggleCase(char str[]);

int main() {
    
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces
    convertVowels(str);
    printf("String after conversion: %s\n", str);

    removeSpaces(str);
    printf("String without spaces: %s\n", str);

    toggleCase(str);
    printf("String after case toggle: %s\n", str);



    return 0;
}

void toggleCase(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
}

void removeSpaces(char str[]){
    int i, j=0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]!=' '){  // copy only non-space characters
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0'; // end the new string properly
}

void convertVowels(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a') str[i]='A';
        else if (str[i] == 'e') str[i]='E';
        else if (str[i] == 'i') str[i]='I';
        else if (str[i] == 'o') str[i]='O';
        else if (str[i] == 'u') str[i]='U';
    }
}




// b. Write a program to print the highest frequency
// character in a string.
/*
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256  // total ASCII characters

char getMaxFrequencyChar(char str[]) {
    int freq[ASCII_SIZE] = {0};
    int maxFreq = -1;
    char result;

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;

        if (maxFreq < freq[(unsigned char)str[i]]) {
            maxFreq = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }
    return result;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char ans = getMaxFrequencyChar(str);

    printf("Highest frequency character is: '%c'\n", ans);

    return 0;
}

*/