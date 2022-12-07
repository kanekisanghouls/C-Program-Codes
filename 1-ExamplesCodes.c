//========================= DO-WHILE LOOP =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
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

//========================= FOR LOOP =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
#include <stdio.h>

int main()
{
 int a = 5;
 int lap;
 int car;

 printf("Select your car. Input Number 1,2 and 3 to select your car: \n");
 printf("1) Bugatti 2) Ferrari 3) Lamborghini  \n");
 scanf("%d",&car);
 if(car==1)
 {
  printf("You've choosen 1) Bugatti \n");

  for(int i= 0;a>=i;i++ )
     {
            lap = i;
            printf("Laps %2d\n",lap);

     }
    printf("Lap Finish");
 }
 else if(car==2)
 {
  printf("You've choosen 2) Ferrari \n");

  for(int i= 0;a>=i;i++ )
     {
            lap = i;
            printf("Laps %2d\n",lap);

     }
    printf("Lap Finish");
 }
 else if(car==3)
 {
  printf("You've choosen 3) Lamborghini \n");

  for(int i= 0;a>=i;i++ )
     {
            lap = i;

            printf("Laps %2d\n",lap);

     }
     printf("Lap Finish");

 }
 else
 {
  printf("Invalid Input");
 }


 return 0;
}


//========================= WHILE LOOP INFINITE =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
#include <stdio.h>
#include <stdbool.h>
//stdbool is for Boolean to be used
int main()
{
    /* Boolean stat Infinite Loop and using
     While as Infinite Loop
     For loop or the 7 Pages Mudas
     Press ctrl + break to exit Infinite Loop
     */
    bool iHave_A_Dream = true;
    int i = 0;
    int move= 1;
    int pages = 7;
    int numTrap= 0;
    printf("Giorno Giovanna : Moveset \n");
    printf("Select Move \n 1) Golden Experience Requiem \n 2) Muda Muda Barrage\n");
    numTrap = scanf("%d",&move);
    if(move==1)
    {
      printf("Giorno Used Golden Experience Requiem \n");
       if(iHave_A_Dream == true ){
          while (move == numTrap)
            {
              printf("Diavolo and King Crimson : Loop Count = ");
              printf("%d\n",i);
              i++;
          }
      }
      else
        {
         printf(" OH MY GOD !!!");
        }
    }
    else if(move==2)
    {
       printf("Giorno Used Muda Barrage \n");
       for(int x = 0; pages > x;x++){
         printf(" Muda ! Muda! Muda! Muda! \n");
       }
       printf(" WRYYYYYYYY!!!!!");
    }
    else
    {
     printf("Giorno Used the Joestar's Secret Technique \n");
     printf("  Nigerundayo !!\n");
     printf("--- Proceeds to Runaway ---");
    }

 return 0;
}


//========================= NEST LOOP ROWS AND COLUMNS =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
#include <stdio.h>
#include <stdbool.h>
int main()
{
       int inputRow;
       int inputColumn;
       char string[20];
       int options;
       bool proceed = true;

      do{
           printf("Enter the value of input Column: ");
           scanf("%d",&inputColumn);
           printf("Enter the value of input Row: ");
           scanf("%d",&inputRow);
           printf("Input String : \n");
           scanf("%s",&string);
           printf("Your String Input is %s : \n",string);
           for(int i=1;i<=inputColumn;i++)
           {
               for(int j=1;j<=inputRow;j++)
               {
                   printf("%s\t",(string));
               }
               printf("\n");
           }


        printf("Do you want to continue?  \n1) Yes \n2) No \n");
        scanf("%d",&options);
        if(options==1)
        {
          proceed = true;
        }
        else if(options ==2)
        {
          proceed = false;
        }
        else
        {
          proceed = false;
        }
       }
       while(proceed);


       return 0;
}
