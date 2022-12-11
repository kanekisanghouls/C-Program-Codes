//================================= BANKING CODES #1 =================================
#include <stdio.h>

//Data array to store customer banking data
struct banking_data
{
    int account_no;
    char name[30];
    float balance;
};

//Function to print banking data
void print_data(struct banking_data data[], int size)
{
    printf("Account No.\tName\tBalance\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\t\t%s\t%f\n", data[i].account_no, data[i].name, data[i].balance);
    }
}

int main(void)
{
    //Declare data array
    struct banking_data data[3] = 
    {
        {1234, "John Doe", 1000.00},
        {1235, "Jane Doe", 2000.00},
        {1236, "Bob Smith", 3000.00}
    };
    
    //Print data
    print_data(data, 3);
    
    return 0;
}

//================================= BANKING CODES #2 =================================

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

float balance = 0.0; 

void deposit(float amount) 
{ 
	balance += amount; 
	printf("\nAmount Deposited: %.2f", amount); 
	printf("\nTotal Balance: %.2f\n", balance); 
} 

void withdraw(float amount) 
{ 
	if (balance >= amount) { 
		balance -= amount; 
		printf("\nAmount Withdrawn: %.2f", amount); 
		printf("\nTotal Balance: %.2f\n", balance); 
	} 
	else
		printf("\nInsufficient Balance\n"); 
} 

int main() 
{ 
	int choice; 
	float amount; 
	while (1) { 
		printf("\nBanking System\n"); 
		printf("\n1. Deposit"); 
		printf("\n2. Withdraw"); 
		printf("\n3. Balance Enquiry"); 
		printf("\n4. Exit\n"); 
		printf("\nEnter your choice: "); 
		scanf("%d", &choice); 
		switch (choice) { 
		case 1: 
			printf("\nEnter the amount to be deposited: "); 
			scanf("%f", &amount); 
			deposit(amount); 
			break; 
		case 2: 
			printf("\nEnter the amount to be withdrawn: "); 
			scanf("%f", &amount); 
			withdraw(amount); 
			break; 
		case 3: 
			printf("\nTotal Balance: %.2f\n", balance); 
			break; 
		case 4: 
			exit(0); 
		default: 
			printf("\nInvalid Choice\n"); 
		} 
	} 
	return 0; 
}

//================================= BANKING CODES #3 =================================
#include <stdio.h>

int main(void)
{
	float balance=0;
	int choice;
float deposit;float withdraw;
	printf("===== Welcome to the Banking System =====\n");
	printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Quit\n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	while (choice != 4){
		switch(choice){
			case 1:

				printf("Enter amount to deposit: ");
				scanf("%f", &deposit);
				balance += deposit;
				printf("Your current balance is %.2f\n", balance);
				break;

			case 2:

				printf("Enter amount to withdraw: ");
				scanf("%f", &withdraw);
				if (withdraw > balance){
					printf("Insufficient balance\n");
				}
				else {
					balance -= withdraw;
					printf("Your current balance is %.2f\n", balance);
				}
				break;

			case 3:
				printf("Your current balance is %.2f\n", balance);
				break;

			default:
				printf("Invalid Choice\n");
				break;
		}
		printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Quit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
	}
	return 0;
}

//================================= BANKING CODES #4 =================================

//================================= BANKING CODES #5 =================================

