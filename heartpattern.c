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
