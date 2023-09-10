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
