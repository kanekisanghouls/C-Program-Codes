#include<stdio.h>

// Structure to represent a customer (Banking)
struct Customer
{
    char name[50]; int age; char address[100]; int account_number;
    float balance;
};

// Function to create a new account
void createAccount(struct Customer customers[], int size)
{
    int i = size - 1;
    printf("    ========================\n");
    printf("    Enter customer name: "); scanf("%s", customers[i].name);
    printf("    Enter customer age: "); scanf("%d", &customers[i].age);
    printf("    Enter customer address: "); scanf("%s", customers[i].address);
    printf("    Enter customer account number: "); scanf("%d", &customers[i].account_number);
    printf("    Enter customer balance: "); scanf("%f", &customers[i].balance);
    printf("\n    Account created successfully!\n");
    printf("    ========================\n");
}

// Function to deposit money
void depositMoney(struct Customer customers[], int size)
{
    int i, ac;
    float amt;

    printf("    Enter customer account number: ");
    scanf("%d", &ac);

    for(i=0; i<size; i++)
    {
        if(customers[i].account_number == ac)
        {
            printf("    Enter amount to be deposited: ");
            scanf("%f", &amt);
            customers[i].balance += amt;
            printf("\n    Deposited successfully!\n");
            break;
        }
    }
    if(i == size)
    {
        printf("\n    Account number not found!\n");
    }
}

// Function to withdraw money
void withdrawMoney(struct Customer customers[], int size)
{
    int i, ac;
    float amt;

    printf("    Enter customer account number: ");
    scanf("%d", &ac);

    for(i=0; i<size; i++)
    {
        if(customers[i].account_number == ac)
        {
            printf("    Enter amount to be withdrawn: ");
            scanf("%f", &amt);
            if(amt > customers[i].balance)
            {
                printf("\n    Insufficient balance!\n");
            }
            else
            {
                customers[i].balance -= amt;
                printf("\n    Withdrawn successfully!\n");
            }
            break;
        }
    }
    if(i == size)
    {
        printf("\n    Account number not found!\n");
    }
}

// Function to display customer details
void displayDetails(struct Customer customers[], int size)
{
    int i, ac;

    printf("    Enter customer account number: ");
    scanf("%d", &ac);

    for(i=0; i<size; i++)
    {
        if(customers[i].account_number == ac)
        {
            printf("    ========================\n");
            printf("\n    Name: %s\n", customers[i].name);
            printf("    Age: %d\n", customers[i].age);
            printf("    Address: %s\n", customers[i].address);
            printf("    Account Number: %d\n", customers[i].account_number);
            printf("    Balance: %.2f\n", customers[i].balance);
            printf("    ========================\n");
            break;
        }
    }
    if(i == size)
    {
        printf("\n    Account number not found!\n");
    }
}

// Main function
int main()
{
    struct Customer customers[20]; int size = 0; int choice;
    do
    {
        printf("\n    ===== BANKING ACCOUNT =====\n");
        printf("\n    1. Create Account\n"); printf("    2. Deposit Money\n");
        printf("    3. Withdraw Money\n"); printf("    4. Display Details\n");
        printf("    5. Exit\n"); printf("\n    Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount(customers, size);
                size++;
                    break;
            case 2:
                depositMoney(customers, size);
                    break;
            case 3:
                withdrawMoney(customers, size);
                    break;
            case 4:
                displayDetails(customers, size);
                    break;
            case 5:
                printf("\n    Thank you and have a nice day!~");
                    break;
            default:
                printf("\n    Invalid choice!\n");
                    break;
        }

    } while(choice != 5);

    return 0;
}
