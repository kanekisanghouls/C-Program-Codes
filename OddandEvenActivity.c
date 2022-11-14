#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main ()
{
    int i,n;
    int choices;
    bool repeat =false;

    printf("\nOdd and Even [Activity]\n");
    printf("\nPlease enter any number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    // Even
    {
    if(i%2==0)
    {
    printf("%d is Even\n",i);
    }

    // Odd
    else
    {
    printf("%d is Odd\n",i);
    }
    }
do{
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

    getch();
    return 0;
}
