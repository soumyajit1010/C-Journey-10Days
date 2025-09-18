// Enter address (house no, block, city, state) of 5 people.

#include <stdio.h>
#include<string.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);


int main() {
    struct address adds[5];
    // //input
    // printf("enter info for person 1 : ");
    // scanf("%d", &adds[0].houseNo);
    // scanf("%d", &adds[0].block);
    // scanf("%s", adds[0].city);
    // scanf("%s", adds[0].state);

    // printf("enter info for person 2 : ");
    // scanf("%d", &adds[1].houseNo);
    // scanf("%d", &adds[1].block);
    // scanf("%s", adds[1].city);
    // scanf("%s", adds[1].state);

    // printf("enter info for person 3 : ");
    // scanf("%d", &adds[2].houseNo);
    // scanf("%d", &adds[2].block);
    // scanf("%s", adds[2].city);
    // scanf("%s", adds[2].state);
     
    // printf("enter info for person 4 : ");
    // scanf("%d", &adds[3].houseNo);
    // scanf("%d", &adds[3].block);
    // scanf("%s", adds[3].city);
    // scanf("%s", adds[3].state);

    // printf("enter info for person 5 : ");
    // scanf("%d", &adds[4].houseNo);
    // scanf("%d", &adds[4].block);
    // scanf("%s", adds[4].city);
    // scanf("%s", adds[4].state);


    // input for 5 people
    for (int i = 0; i < 5; i++) {
        printf("\nEnter info for person %d : \n", i + 1);
        printf("House No: ");
        scanf("%d", &adds[i].houseNo);
        printf("Block: ");
        scanf("%d", &adds[i].block);
        printf("City: ");
        scanf("%s", adds[i].city);
        printf("State: ");
        scanf("%s", adds[i].state);
    }

    // print addresses
    printf("\n--- Stored Addresses ---\n");
    for (int i = 0; i < 5; i++) {
        printAdd(adds[i]);
    }
    
    return 0;
}

void printAdd(struct address add){
    printf("Address is : House No. %d, Block %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}