#include <stdio.h>

int main(){

    char product[36];
    int decision1;
    int type;

    printf("Please input the product you wish to store.\n");
    scanf("%s", &product);
    printf("Is %s perishable or non-perishable? (input 1 if persihable, input 2 of non-perishable)", &product);
    scanf("%d", &decision1);

        if(decision1 == 1){
        printf("Is %s butchered meat? (input 1 if YES, input 2 of NO)", &product);
        scanf("%d", &type);

                if (type == 1){
                printf("%s will be stored inside the freezer", &product);
                }
                else if (type == 2) {
                    printf("Is %s processed food? (input 1 if YES, input 2 of NO)", &product);
                    scanf("%d", &type);

                    if (type == 1) {
                        printf("%s will be stored inside the fridge", &product);
                    }
                    else if (type == 2) {
                        printf("Is %s fragile food? (input 1 if YES, input 2 of NO)", &product);
                        scanf("%d", &type);

                        if (type == 1) {
                        printf("%s will be stored inside the display fridge", &product);
                        }
                        else if (type == 2) {
                            printf ("Then what is it?");
                        }
                    }
                }
        }


        else if(decision1 == 2){
        printf("%s does not need to be stored inside a cooling appliance.", &product);

        }

        return 0;
}
