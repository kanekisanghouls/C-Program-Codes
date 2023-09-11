#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float a,i,j,q,w;
    q=tan(M_PI*0.4);
    w=tan(M_PI*0.2);
    a=6;
    int z,y,x,top,c;
    printf("STAR PLATINUM\n");
    for(j=ceil(a*q);j>=0;j--)
    {
        for(i=-ceil(0.55*a*q/w-a);i<ceil(0.55*a*q/w-a);i++)
            {
            if((j<=0.55*a*q && j>=(i+a)*w && j>=(a-i)*w)
               || (j>=(i+a)*w && j<=(i+a)*q && j<=(a-i)*q) || (j<=(a-i)*q
                            && j>=a-i)*w && j<=(i+a)*q)
                       {
                           printf("*");
                       }
                else{
                    printf(" ");
                }
            }
            printf("\n");
    }

}
