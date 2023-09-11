//========================= WHILE LOOP INFINITE =========================

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
