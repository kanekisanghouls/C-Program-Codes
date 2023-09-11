#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account
{
	int AccountNumber;
	char Name[20];
	float Balance;
};

// Function to display all accounts
void Display(struct Account Ac[], int size)
{
	int i;
	printf("\nAccount Number\tName\t\tBalance\n");
	for (i=0; i<size; i++)
	{
		printf("%d\t\t%s\t\t%.2f\n",Ac[i].AccountNumber,
						Ac[i].Name, Ac[i].Balance);
	}
	printf("\n");
}

// Function to deposit amount
void Deposit(struct Account Ac[], int size, int accno, float amt)
{
	int i;
	for (i=0; i<size; i++)
	{
		if (Ac[i].AccountNumber == accno)
		{
			Ac[i].Balance+=amt;
			printf("\nDeposited successfully\n");
			printf("\nUpdated Balance:%.2f\n", Ac[i].Balance);
			break;
		}
	}
	if (i == size)
		printf("\nAccount number not found\n");
}

// Function to withdraw amount
void Withdraw(struct Account Ac[], int size, int accno, float amt)
{
	int i;
	for (i=0; i<size; i++)
	{
		if (Ac[i].AccountNumber == accno)
		{
			if (Ac[i].Balance > amt)
			{
				Ac[i].Balance-=amt;
				printf("\nWithdrawal successful\n");
				printf("\nUpdated Balance:%.2f\n", Ac[i].Balance);
			}
			else
				printf("\nInsufficient balance\n");
			break;
		}
	}
	if (i == size)
		printf("\nAccount number not found\n");
}

int main()
{
	struct Account Ac[10];

	// Initialize Accounts
	Ac[0].AccountNumber = 1001;
	strcpy(Ac[0].Name, "John Doe");
	Ac[0].Balance = 5000;

	Ac[1].AccountNumber = 1002;
	strcpy(Ac[1].Name, "Abhishek");
	Ac[1].Balance = 10000;

	Ac[2].AccountNumber = 1003;
	strcpy(Ac[2].Name, "Shyam");
	Ac[2].Balance = 8000;

	Ac[3].AccountNumber = 1004;
	strcpy(Ac[3].Name, "Rahul");
	Ac[3].Balance = 6000;

	int size = 4;
	int choice;
	int accno;
	float amt;

	while (1)
	{
		printf("\n1.Display Records\n2.Deposit\n3.Withdraw\n4.Exit\n");
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				Display(Ac, size);
				break;
			case 2:
				printf("\nEnter the Account Number:");
				scanf("%d", &accno);
				printf("\nEnter the amount to be deposited:");
				scanf("%f", &amt);
				Deposit(Ac, size, accno, amt);
				break;
			case 3:
				printf("\nEnter the Account Number:");
				scanf("%d", &accno);
				printf("\nEnter the amount to be withdrawn:");
				scanf("%f", &amt);
				Withdraw(Ac, size, accno, amt);
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid Choice\n");
				break;
		}
	}
	return 0;
}
