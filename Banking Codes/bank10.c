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
