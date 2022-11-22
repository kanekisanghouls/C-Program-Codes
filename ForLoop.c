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
