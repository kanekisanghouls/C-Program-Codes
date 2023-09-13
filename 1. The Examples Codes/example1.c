//========================= DO-WHILE LOOP =========================

#include <stdio.h>
#include <stdbool.h>

int main()
{
   int i = 0;
   int option;
   int num;
   bool stats = true;
   printf("Try Input a Number Until you're bored \n");
    do{
      //printf("%d\n", i);
      printf("Input a Number : \n");
      scanf("%d",&num);
      i++;
      printf("Do you want to Continue? \n 1)Yes \n 2)No \n");
      scanf(" %d",&option);
      if(option == 1)
      {
        stats = true;
      }
      else if(option == 2)
      {
         stats = false;
      }
      else
      {
        printf("Invalid Input \n");
        stats = false;
      }
    }
    while(stats);


 return 0;
}
