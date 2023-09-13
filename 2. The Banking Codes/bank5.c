#include <stdio.h>

// Create struct to store customer data
struct Customer
{
    char name[50];
    int account_number;
    int balance, pin;

};

// Function to create a new customer
void create_new_customer()
{
    printf("Enter the customer's name: ");
    scanf("%s", &c->name);
    printf("Enter the customer's account number: ");
    scanf("%d", &account_number);
    printf("Enter the customer's balance: ");
    scanf("%d", &balance);
    printf("Enter the customer's PIN: ");
    scanf("%d", &pin);
}

// Function to deposit money
void deposit(struct Customer *c, int amount)
{
    balance += amount;
    printf("Deposited amount: %d \n", amount);
    printf("New account balance: %d \n", balance);
}

// Function to withdraw money
void withdraw(struct Customer, int amount)
{
    if (amount > balance) {
        printf("Insufficient balance! \n");
        return;
    }
    balance -= amount;
    printf("Withdrew amount: %d \n", amount);
    printf("New account balance: %d \n", balance);
}

// Main program
int main()
{
    struct Customer c;
    create_new_customer(&c);
    deposit(&c, 500);
    withdraw(&c, 300);
    return 0;
}
