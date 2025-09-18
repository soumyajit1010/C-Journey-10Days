// Create a structure to store vectors.
// Then make a function to return sum of 2 vectors.

// #include <stdio.h>
// #include <string.h>

// struct vector
// {
//     int x;
//     int y;
// };
// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// int main()
// {
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector sum = {0};

//     calcSum(v1, v2, sum);

//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum)
// {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("Sum = (%d, %d)\n", sum.x, sum.y);
// }



// create a structure to store complex numbers.(ues row operator)
/*
#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main() {
    struct complex num1={5,8};
    struct complex *ptr=&num1;
    printf("real part = %d\n", ptr->real);
    printf("img part = %d\n", ptr->img);

    
    return 0;
}
*/
/*


struct complex {
    int real;
    int img;
};

// Function to add two complex numbers
struct complex addComplex(struct complex *c1, struct complex *c2) {
    struct complex sum;
    sum.real = c1->real + c2->real;
    sum.img = c1->img + c2->img;
    return sum;
}

int main() {
    struct complex num1, num2, result;

    // Input complex numbers
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%d %d", &num1.real, &num1.img);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%d %d", &num2.real, &num2.img);

    // Call function using pointer
    result = addComplex(&num1, &num2);

    // Print numbers
    printf("\nFirst Complex Number  = %d + %di", num1.real, num1.img);
    printf("\nSecond Complex Number = %d + %di", num2.real, num2.img);
    printf("\nSum of Complex Numbers = %d + %di\n", result.real, result.img);

    return 0;
}
*/



//Make a structure to store Bank Account 
//Information of a customer of ABC Bank/Also, 
//make an alias for it.

#include <stdio.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;

int main() {

    acc acc1 = {123, "Soumyajit"};
    acc acc2 = {125, "Soumya"};
    printf("acc no = %d\n", acc1.accountNo);
    printf("acc no = %s\n", acc1.name);

    return 0;
}
/*
#include <stdio.h>
#include <string.h>

// Structure for Bank Account Information
typedef struct {
    int accountNo;
    char name[100];
    char branch[100];
    float balance;
} BankAccount;   // Alias for struct

int main() {
    BankAccount customer;

    // Input details
    printf("Enter Account Number: ");
    scanf("%d", &customer.accountNo);
    getchar(); // clear buffer

    printf("Enter Customer Name: ");
    fgets(customer.name, sizeof(customer.name), stdin);
    customer.name[strcspn(customer.name, "\n")] = '\0'; // remove newline

    printf("Enter Branch Name: ");
    fgets(customer.branch, sizeof(customer.branch), stdin);
    customer.branch[strcspn(customer.branch, "\n")] = '\0';

    printf("Enter Balance: ");
    scanf("%f", &customer.balance);

    // Display details
    printf("\n--- Customer Bank Account Information ---\n");
    printf("Account Number : %d\n", customer.accountNo);
    printf("Name           : %s\n", customer.name);
    printf("Branch         : %s\n", customer.branch);
    printf("Balance        : %.2f\n", customer.balance);

    return 0;
}

*/