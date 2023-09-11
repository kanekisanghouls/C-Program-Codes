#include <stdio.h>

int main(){

    char Food [36];
    int x;
    int y;

    printf("Input your food here: ");
    scanf("%s", &Food);
    printf("Does %s fall under in any of these food categories below? \n", Food);
    printf("Butchered meat (1) | Processed food (2) | Fragile food (3): ");
    scanf("%d", &x);

    if (x==1){
        printf("%s is Perishable and should be stored in a freezer", Food);

        printf("\n\nProgram has ended peacefully...");
    }
    else if(x==2){
        printf("Is %s a Perishable Processed food or not? \n(1) for Yes | (2) for No: ", Food);
        scanf("%d", &y);
        if(y==1){
            printf("%s is Perishable and should be stored in a fridge", Food);

            printf("\n\nProgram has ended peacefully...");
        }
        else if(y==2){
            printf("%s is Non-perishable and can be stored in any storage with safe temperature", Food);

            printf("\n\nProgram has ended peacefully...");
        }
        else{
        printf("You have input a wrong value");
    }

    }

    else if(x==3){
        printf("%s is Perishable and should be stored in a display fridge", Food);

        printf("\n\nProgram has ended peacefully...");
    }
    else{
        printf("You have input a wrong value");
    }

    return 0;
}
