#include <stdio.h>

//Data array to store customer banking data
struct banking_data
{
    int account_no;
    char name[30];
    float balance;
};

//Function to print banking data
void print_data(struct banking_data data[], int size)
{
    printf("Account No.\tName\tBalance\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\t\t%s\t%f\n", data[i].account_no, data[i].name, data[i].balance);
    }
}

int main(void)
{
    //Declare data array
    struct banking_data data[3] = 
    {
        {1234, "John Doe", 1000.00},
        {1235, "Jane Doe", 2000.00},
        {1236, "Bob Smith", 3000.00}
    };
    
    //Print data
    print_data(data, 3);
    
    return 0;
}
