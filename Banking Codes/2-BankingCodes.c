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

//================================= BANKING CODES #5 =================================

#include <stdio.h>

//declare global variables
float balance[100];
int account_num[100];

//function to open an account
void open_account(){
	int num,i;
	float bal;
	printf("Enter the account number\n");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(account_num[i]==num)
		{
			printf("Account already exists\n");
			return;
		}
	}
	
	printf("Enter the initial balance\n");
	scanf("%f",&bal);
	for(i=0;i<100;i++)
	{
		if(balance[i]==0)
		{
			balance[i]=bal;
			account_num[i]=num;
			printf("Account created successfully\n");
			return;
		}
	}
	
	printf("Unable to create account\n");
	return;
}

//function to deposit money
void deposit(){
	int num,i;
	float bal;
	printf("Enter the account number\n");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(account_num[i]==num)
		{
			printf("Enter the deposit amount\n");
			scanf("%f",&bal);
			balance[i]+=bal;
			printf("Deposit successful\n");
			return;
		}
	}
	
	printf("Account not found\n");
	return;
}

//function to withdraw money
void withdrawal(){
	int num,i;
	float bal;
	printf("Enter the account number\n");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(account_num[i]==num)
		{
			printf("Enter the withdrawal amount\n");
			scanf("%f",&bal);
			if(balance[i]>=bal)
			{
				balance[i]-=bal;
				printf("Withdrawal successful\n");
				return;
			}
			else
			{
				printf("Insufficient balance\n");
				return;
			}
		}
	}
	
	printf("Account not found\n");
	return;
}

//function to check balance
void check_balance(){
	int num,i;
	printf("Enter the account number\n");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(account_num[i]==num)
		{
			printf("Balance = %.2f\n",balance[i]);
			return;
		}
	}
	
	printf("Account not found\n");
	return;
}

//driver code
int main(){
	int choice;
	while(1){
		printf("1. Open an account\n");
		printf("2. Deposit money\n");
		printf("3. Withdraw money\n");
		printf("4. Check balance\n");
		printf("5. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: open_account();
					break;
			case 2: deposit();
					break;
			case 3: withdrawal();
					break;
			case 4: check_balance();
					break;
			case 5: return 0;
			default: printf("Invalid choice\n");
		}
	}
	
	return 0;
}
