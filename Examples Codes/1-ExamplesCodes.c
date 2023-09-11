//========================= ARRAY =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
#include <stdio.h>
#include <string.h>

int main()
{

    int n,i; int arr[n]; printf("Enter size of array :\n"); scanf("%d", &n);
    printf("your Size of Array is %d!! \n",n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[n]);
    }
        printf("Size %d \n ",n);

    for(i = 0; i < n; i++)
    {
        printf("\n Input Elements for Array to be holded by a[%d]: \n", i); scanf("%d", &arr[i]);
    }

    printf("\n Printing elements of the array: \n\n");

    for(i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
 return 0;
}

//========================= FUNCTIONS =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]
#include <stdio.h>
int main()
{
    int choices;
    printf("Do you want to Use your Special Move ?\n 1)Reality Marble \n 2)Secret Move\n 3) Pressure Points \n");
    scanf("%d",&choices);
    printf("----------------------- \n");
    if(choices == 1)
    {
        printf("By my Command Seal Archer user your Noble Phantasm\n"); sleep(2);
        iAmtheBone(); sleep(3); stealIsMyBody(); sleep(3); haveCreated();
        sleep(3); unknownTolife(); sleep(3); HaveWithstood();
        sleep(3); YetThose(); sleep(3); SoAsI(); sleep(2);
        UnlimitedBlade(); sleep(2);
    }
     else if(choices==2)
    {
        UltimateTechnique();
    }
    else if (choices==3)
    {
        Weapons();
    }
    else{
        printf("Invalid");
    }
 return 0;
}

void iAmtheBone() { printf("I am the Bone of My Sword \n"); sleep(2); }
void stealIsMyBody() { printf("Steal is My Body and Fire is my Blood \n"); }
void YetThose() { printf("Yet those hands will never hold anything \n"); }
void UnlimitedBlade() { printf("Unlimited Blade Works \n"); }
void UltimateTechnique() { printf("Smokey , Nigerundayo !!!"); }

void Weapons() {
    for(int q=1; q<4;q++)
    {
      sleep(1);
      printf("Ataatatatatat \n");
    }

  printf("Kenshiro: "); sleep(2); printf(" Omae wa Mou Shinderu \n");
  sleep(1); printf("Enemy : "); sleep(2);
  printf(" Nani!!!!!"); sleep(2);

}

void haveCreated() { printf("I Have Created over a Thousand Blades \n"); }
void unknownTolife() { printf("Unknown to Life, nor Known to Death \n"); }
void HaveWithstood() { printf("Have withstood the pain to Create many Weapons \n"); }
void SoAsI() { printf("So as I Pray \n"); }
void Stand() { printf(""); }

//========================= SWITCH CASE =========================
// [ SCROLL DOWN TO SEE ANOTHER EXAMPLES !! ]

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
            proceed1= true; break;
        case 2:
            printf("Your Answer : No \n");
            proceed1= false; break;
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
