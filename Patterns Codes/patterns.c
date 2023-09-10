#include <stdio.h>

int main()
{
    int row;
    int space;
    int y =0;
    int x;

   printf("Enter Row size : ");
   scanf("%d",&row);
    for(x=1;x<=row;x++,y=0)
    {
        for(space=1;space<=row-x;++space)
        {
             printf(" ");
        }
         while(y !=2*x-1){
          printf("* ");
          y++;
         }
        printf("\n");
    }



 return 0;
}
