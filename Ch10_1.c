// 10. File I/O
#include <stdio.h>

int main()
{

    FILE *fptr;
    // fptr = fopen("Test.txt", "r");
    // if(fptr==NULL){
    //     printf("file doesnot exist\n");
    // }else{
    //     fclose(fptr);
    // }

    // int ch;
    // fscanf(fptr, "%d", &ch);
    // printf("Character = %d\n", ch);
    // fscanf(fptr, "%d", &ch);
    // printf("Character = %d\n", ch);
    // fscanf(fptr, "%d", &ch);
    // printf("Character = %d\n", ch);


    //fptr = fopen("Test.txt", "w");
    // fptr = fopen("Test.txt", "a");

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');


    // fptr = fopen("Test.txt", "r");
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));


    // fptr = fopen("Test.txt", "w");
    // fputc('M',fptr);
    // fputc('M',fptr);
    // fputc('M',fptr);
    // fputc('M',fptr);
    // fputc('M',fptr);

    // fptr = fopen("Test.txt", "r");
    // char ch;
    // ch=fgetc(fptr);
    // while (ch!=EOF)
    // {
    //     printf("%c", ch);
    //     ch=fgetc(fptr);
    // }
    // printf("\n");

    fptr = fopen("Test.txt", "r");
    int n;
    fscanf(fptr, "%d",&n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d",&n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d",&n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d",&n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d",&n);
    printf("Number = %d\n", n);


    fclose(fptr);

    return 0;
}