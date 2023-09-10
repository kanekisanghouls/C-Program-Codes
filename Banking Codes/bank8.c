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
