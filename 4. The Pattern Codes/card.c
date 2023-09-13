#include <stdio.h>

int main()
{
    int i, j, rows;
    rows = 10;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
