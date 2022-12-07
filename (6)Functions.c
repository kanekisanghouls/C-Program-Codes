#include <stdio.h>




int main()
{
    int choices;
    printf("Do you want to Use your Special Move ?\n 1)Reality Marble \n 2)Secret Move\n 3) Pressure Points \n");
    scanf("%d",&choices);
    printf("----------------------- \n");
    if(choices == 1)
    {
        printf("By my Command Seal Archer user your Noble Phantasm\n");
        sleep(2);
        iAmtheBone();
        sleep(3);
        stealIsMyBody();
        sleep(3);
        haveCreated();
        sleep(3);
        unknownTolife();
        sleep(3);
        HaveWithstood();
        sleep(3);
        YetThose();
        sleep(3);
        SoAsI();
        sleep(2);
        UnlimitedBlade();
        sleep(2);

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


void iAmtheBone()
{
  printf("I am the Bone of My Sword \n");
  sleep(2);
}

void stealIsMyBody()
{
  printf("Steal is My Body and Fire is my Blood \n");
}

void YetThose()
{
 printf("Yet those hands will never hold anything \n");
}

void UnlimitedBlade()
{
 printf("Unlimited Blade Works \n");
}

void UltimateTechnique()
{
 printf("Smokey , Nigerundayo !!!");
}

void Weapons()
{
    for(int q=1; q<4;q++)
    {
      sleep(1);
      printf("Ataatatatatat \n");
    }

  printf("Kenshiro: ");
  sleep(2);
  printf(" Omae wa Mou Shinderu \n");
  sleep(1);
  printf("Enemy : ");
  sleep(2);
  printf(" Nani!!!!!");
  sleep(2);

}


void haveCreated()
{
 printf("I Have Created over a Thousand Blades \n");
}
void unknownTolife()
{
    printf("Unknown to Life, nor Known to Death \n");
}
void HaveWithstood()
{
    printf("Have withstood the pain to Create many Weapons \n");
}

void SoAsI()
{
  printf("So as I Pray \n");
}


void Stand()
{

}
