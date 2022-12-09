//========================== PATTERNS ==========================
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

//========================== PATTERNS TRIANGLE ==========================
#include <stdio.h>
int main() {
   int x;
   int space;
   int rows;
   int z = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (x = 1; x <= rows; ++x, z = 0) {
      for (space = 1; space <= rows - x; ++space) {
         printf("  ");
      }
      while (z != 2 * x - 1) {
         printf("* ");
         ++z;
      }
      printf("\n");
   }
   return 0;
}

//========================== PATTERNS DIAMOND ==========================
# include <stdio.h>
int diamondPattern(int num)
{
    int str = 1;
	while(str <= num)
	{
		int i = 1;
		while(i ++ <= (num - str) * 2 + 1)
			printf(" ");
		i = 0;
		while(i ++ < 2 * str - 1)
			printf("* ");
		str ++;
		printf("\n");
	}
	str = num - 1;
	while(str != 0)
	{
		int i = 1;
		while(i ++ <= (num - str) * 2 + 1)
			printf(" ");
		i = 0;
		while(i ++ < 2 * str - 1)
			printf("* ");
		str --;
		printf("\n");
	}
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    diamondPattern(number);
}


//========================== PATTERNS HEART ==========================
#include <stdio.h>

int main()
{
    int i, j, n;


    printf("Enter value of n : ");
    scanf("%d", &n);
    system("color c");
    i=n/2;
    while(i<=n)
    {
        j=1;
        while(j<n-i)
        {
            printf(" ");
            j+=2;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i+=2;
    }
    i=n;
    while(i>=1)
    {
        j=i;
        while(j<n)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=(i*2)-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}


//========================== PATTERNS STAR ==========================
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










