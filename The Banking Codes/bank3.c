#include<stdio.h>
#include<stdlib.h>

// Defining structure for student account
struct student
{
    char name[50];
    int accountNumber;
    int balance;
};

// Declaring array to store data
struct student studentAccount[50];

// Function to add new student
void addStudent()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the student name:");
        scanf("%s", studentAccount[i].name);
        printf("Enter the account number:");
        scanf("%d", &studentAccount[i].accountNumber);
        printf("Enter the balance:");
        scanf("%d", &studentAccount[i].balance);
        printf("\n");
    }
    printf("%d students added successfully!\n", n);
}

// Function to print details of all students
void printDetails()
{
    printf("The student details are:\n");
    for(int i=0; i<50; i++)
    {
        if(studentAccount[i].accountNumber!=0)
        {
            printf("Name: %s\n", studentAccount[i].name);
            printf("Account Number: %d\n", studentAccount[i].accountNumber);
            printf("Balance: %d\n\n", studentAccount[i].balance);
        }
    }
}

// Function to deposit money in student account
void depositMoney()
{
    int accNo, amount;
    printf("Enter the account number:");
    scanf("%d", &accNo);
    printf("Enter the amount to be deposited:");
    scanf("%d", &amount);
    for(int i=0; i<50; i++)
    {
        if(studentAccount[i].accountNumber==accNo)
        {
            studentAccount[i].balance += amount;
            printf("%d deposited successfully!\n", amount);
            break;
        }
    }
}

// Function to withdraw money from student account
void withdrawMoney()
{
    int accNo, amount;
    printf("Enter the account number:");
    scanf("%d", &accNo);
    printf("Enter the amount to be withdrawn:");
    scanf("%d", &amount);
    for(int i=0; i<50; i++)
    {
        if(studentAccount[i].accountNumber==accNo)
        {
            studentAccount[i].balance -= amount;
            printf("%d withdrawn successfully!\n", amount);
            break;
        }
    }
}

// Main program
int main()
{
    int choice;
    while(1)
    {
        printf("1. Add Student\n");
        printf("2. Print Details\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            printDetails();
            break;
        case 3:
            depositMoney();
            break;
        case 4:
            withdrawMoney();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
    return 0;
}
