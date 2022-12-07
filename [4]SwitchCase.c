#include <stdio.h>
#include <stdbool.h>

int main()
{
  int options;
  bool proceed= true;
  bool proceed1= true;
  bool proceed2 = true;
  int  choice;
  int  choice1;
  int  choice2;
  char trainer[20];
  char rival[20];

  printf("My name is Oak! People call me the Prof Oak\n");
  printf("I study Pokémon as a profession, First What is your Name? \n");
  //Your Name
  do{
      printf("Trainer: What is your name?  :");
      scanf("%s",&trainer);
      printf("Is this your Name %s ? \n 1) Yes 2) No \n",trainer);
      scanf("%d",&choice1);
      switch(choice1)
      {
        case 1:
            printf("Your Answer : Yes \n");
            proceed1= true;
        break;
        case 2:
            printf("Your Answer : No \n");
            proceed1= false;
        break;
        default:
            printf("Invalid Options");
        break;
      }

  }while(proceed1==false);
    printf("Ah!! Right your name is %s \n",trainer);
  printf("\n===========\n");


  // Rivals Name
  do{
      printf("This is my Grandson,\nHe's been your rival since you were a baby. ..Erm,\n what is his name again : ");
      scanf("%s",&rival);


      printf("Is that your Rival's Name %s ? \n 1) Yes 2) No \n",rival);
      scanf("%d",&choice2);

      if(choice2==1)
      {
            printf(" Your Answer : Yes \n");
            proceed2= true;
      }
      else if(choice2==2)
      {
            printf(" Your Answer : No \n");
            proceed2= false;
      }
       else{
            printf("Invalid Options");
      }
  }while(proceed2==false);
    printf("Ah!! That's Right I remember now His name is %s \n",rival);
  //Choose a Starter
       do{
            printf("Please %s Choose your Starter Pokemon\n",trainer);
            printf("\n 1) Bulbasaur \n 2) Charmander \n 3) Squirtle \n 4) Pikachu \n5) Eeevee ");
            scanf("%d",&options);
              switch (options) {
                case 1:
                  printf(" Bulbasaur ");
                  break;
                case 2:
                  printf(" Charmander ");
                  break;
                case 3:
                  printf(" Squirtle ");
                  break;
                case 4:
                    printf(" Pikachu ");
                    break;
                case 5:
                    printf(" Eevee ");
                    break;
                default:
                  printf("Invalid Input");
                  break;
              }

              printf("\n Do you want to Change your Starter ? \n 1) Yes \n 2) No \n");
              scanf("%d",& choice);
              switch(choice)
              {
               case 1:
                proceed = true;
               break;
               case 2:
               proceed = false;
               break;
               default:
                 printf("Invalid\n");
                 proceed = false;
               break;
              }
       }while(proceed==true);

       switch(options){
       case 1:
        printf("Trainer %s has choosen Bulbasaur !!\n",trainer);
        printf("%s has choosen Charmander\n",rival);
       break;

       case 2:
        printf("Trainer %s has choosen Charmander !!\n",trainer);
        printf("%s has choosen Squirtle\n",rival);
       break;

       case 3:
        printf("Trainer %s have choosen Squirtle !!\n",trainer);
        printf("%s has choosen Bulbasaur\n",rival);
        break;

       case 4:
        printf("Trainer %s have choosen Pikachu !!\n",trainer);
        printf("%s has choosen Eeevee\n",rival);
        break;

        case 5:
        printf("Trainer %s have choosen Eevee !!\n",trainer);
        printf("%s has choosen Pikachu\n",rival);
        break;

        default:
        printf("Oops Sorry!! ");
        break;
       }

 return 0;
}
