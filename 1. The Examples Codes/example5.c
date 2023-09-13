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
