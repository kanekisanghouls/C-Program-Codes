#include <stdio.h>
#include <stdlib.h>

struct Account {
	int acc_no;
	float balance;
};

struct Customer {
	char name[50];
	struct Account acc;
};

// function to create account
void create_acc(struct Customer *c, int acc_no, float balance)
{
	c->acc.acc_no = acc_no;
	c->acc.balance = balance;
}

// function to deposit 
void deposit(struct Customer *c, float amount)
{
	c->acc.balance += amount;
	printf("You have deposited Rs. %.2f in your account \nYour current balance is Rs. %.2f \n", amount, c->acc.balance);
}

// function to withdraw
void withdraw(struct Customer *c, float amount)
{
	c->acc.balance -= amount;
	printf("You have withdrawn Rs. %.2f from your account \nYour current balance is Rs. %.2f \n", amount, c->acc.balance);
}

// main function
int main()
{
	struct Customer customers[50];
	int n, i, acc_no;
	float balance, amount;
	printf("Enter the number of customers: ");
	scanf("%d", &n);
	
	// loop to create accounts
	for(i=0; i<n; i++)
	{
		printf("\nEnter the account details of customer %d \n", i+1);
		printf("Account Number: ");
		scanf("%d", &acc_no);
		printf("Balance: ");
		scanf("%f", &balance);
		printf("Name: ");
		scanf("%s", customers[i].name);
		
		// create account
		create_acc(&customers[i], acc_no, balance);
	}
	
	// loop to deposit or withdraw
	for(i=0; i<n; i++)
	{
		printf("\nChoose an option for %s \n1. Deposit \n2. Withdraw\n", customers[i].name);
		int choice;
		scanf("%d", &choice);
		
		if(choice == 1)
		{
			printf("Enter the amount to deposit: Rs. ");
			scanf("%f", &amount);
			
			// deposit
			deposit(&customers[i], amount);
		}
		else if(choice == 2)
		{
			printf("Enter the amount to withdraw: Rs. ");
			scanf("%f", &amount);
			
			// withdraw
			withdraw(&customers[i], amount);
		}
		else
		{
			printf("Invalid Choice!");
			break;
		}
	}
	
	return 0;
}
