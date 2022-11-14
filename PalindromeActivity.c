#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int number;
    int originalNumber;
    int reverseNumber;
    int sum = 0;
    int remainder;
    int choices;
    bool repeat = false;

    printf("\nPalindrome or not Palindrome [Activity]\n");

 do{
    printf("\nLet's see if your number is Palindrome or Not Palindrome\nPlease enter any number: ");
    scanf("%ld", &number);

    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        printf("\nRemainder is %d\n", remainder);
        reverseNumber = (reverseNumber * 10) + remainder;
        printf("Reversed Number is %d\n", reverseNumber);
        number = number / 10;
        printf("\nThe new number is %d\n", number);
    }

    if (reverseNumber == originalNumber)
    {
        printf("The user-entered number is a PALINDROME number.\nSince Reversed Number %d is equal to User- entered number %d\n",reverseNumber, originalNumber);

    }
    else
    {
     printf("The user-number is NOT A PALINDROME number. \nSince Reversed Number %d is NOT equal to User- entered number %d\n",reverseNumber, originalNumber);

    }

    printf("\nDo you want to continue?\n");
    printf("[1] Yes or [2] No\n");
    printf("Answer: ");
    scanf("%d", &choices);

    if(choices == 1)
    {
            repeat = true;
    }
    else if(choices == 2)
    {
            repeat=false;
    }

 }while(repeat);


printf("\nHave a great day!\n");


    return 0;

}
========== Created by: https://github.com/kanekisanghouls
