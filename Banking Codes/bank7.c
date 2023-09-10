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
