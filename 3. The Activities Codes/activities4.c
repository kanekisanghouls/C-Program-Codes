#include <stdio.h>
#include <stdbool.h>

int main()
{
    int month,day,year;
    int choice;
    int proceed;
    int options;

    system("color A");

    // INTRODUCTION
    printf("\n===============================");
    printf("\n         Chinese Zodiac        ");
    printf("\n===============================");
    printf("\n     \\--> Let us know what is your Birth Month, birth date, birth year, and Chinese Zodiac ! \n\n");


    // START

    printf("\n       Let's start!\n");

    // INFORMATIONS

do{
    printf("\nPlease Enter your Birth Month(1-12): ");
    printf("\n1:January \n2:February \n3:March \n4:April \n5:May");
    printf("\n6:June \n7:July \n8:August \n9:September \n10:October \n11:November \n12:December ");
    printf("# ");
    scanf("%d",&month);


    printf("\nPlease Enter your Birth Day(1-31): ");
    scanf("%d",&day);

    printf("\nPlease Enter your Birth Year (1936-2055): ");
    scanf("%d",&year);

    printf("\nMonth: %d | Day: %d | Year: %d",month,day,year);
    printf("\n\nAre all data correct? \n1) Yes \n2) No ");
    printf("# ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nYour Answer: Yes\n");
        proceed=true;
        break;
    case 2:
        printf("Your Answer: No\n");
        proceed=false;
        break;
    default:
        printf("Invalid Options!");
        break;
    }
}while(proceed==false);
printf("Alright! Let's get to know your Lucky Number/Color/etc\n\n");

do{
switch ((year - 1936) % 12)
{
default:(year > 1936 || year < 2055);
printf("You entered an invalid year, please try again!");
printf("");
break;

case 0: //=====================================
printf("Your chinese zodiac sign is the rat! ");
printf("Rats are very popular!\n");
printf("Your Lucky Numbers is: 3");
printf("\nYour Lucky Colors is: Red");
printf("\nYour Personality Traits: Adaptable, smart, cautious, positive, outgoing, flexible");
break;

case 1: //=====================================
printf("Your chinese zodiac sign is the ox! ");
printf("Oxes are dependable and calm!\n");
printf("Your Lucky Numbers is: 10");
printf("\nYour Lucky Colors is: Gold");
printf("\nYour Personality Traits: Honest, patient, level-headed, persistent, strong-willed");
break;

case 2: //=====================================
printf("Your chinese zodiac sign is the tiger! ");
printf("Tigers are brave and respected!\n");
printf("Your Lucky Numbers is: 9");
printf("\nYour Lucky Colors is: Orange");
printf("\nYour Personality Traits: Loyal, valiant, courageous, trustworthy, intelligent, virtous");
break;

case 3: //=====================================
printf("Your chinese zodiac sign is the rabbit! ");
printf("Rabits are nice to be around!\n");
printf("Your Lucky Numbers is: 7");
printf("\nYour Lucky Colors is: Pink");
printf("\nYour Personality Traits: Gentle, sensitive, compassionate, amiable, modest, merciful");
break;

case 4: //=====================================
printf("Your chinese zodiac sign is the dragon! ");
printf("Dragons are known for their good health and having lots of energy!\n");
printf("Your Lucky Numbers is: 6");
printf("\nYour Lucky Colors is: Silver");
printf("\nYour Personality Traits: Decisive, inspiring, forgiving, sensitive, ambitious");
break;

case 5: //=====================================
printf("Your chinese zodiac sign is the snake! ");
printf("Snakes are good with money!\n");
printf("Your Lucky Numbers is: 3");
printf("\nYour Lucky Colors is: Black");
printf("\nYour Personality Traits: soft-spoken, humorous, sympathetic, passionate, smart");
break;

case 6: //=====================================
printf("Your chinese zodiac sign is the horse! ");
printf("Horses are popular, cheerful, and quick to compliment others!\n");
printf("Your Lucky Numbers is: 5");
printf("\nYour Lucky Colors is: Green");
printf("\nYour Personality Traits: Upright, easygoing, independent, determinded, positive");
break;

case 7: //=====================================
printf("Your chinese zodiac sign is the goat! ");
printf("Goats are known for being great artists!\n");
printf("Your Lucky Numbers is: 8");
printf("\nYour Lucky Colors is: Brown");
printf("\nYour Personality Traits: Gentle, soft-hearted, considerate, hardworking, persistent, thrift");
break;

case 8: //=====================================
printf("Your chinese zodiac sign is the monkey! ");
printf("Monkeys are very funny and good problem solvers!\n");
printf("Your Lucky Numbers is: 9");
printf("\nYour Lucky Colors is: Grey");
printf("\nYour Personality Traits: Enthusiastic, self-assured, sociable, innovatative");
break;

case 9: //=====================================
printf("Your chinese zodiac sign is the rooster! ");
printf("Roosters are talented and hard working!\n");
printf("Your Lucky Numbers is: 5");
printf("\nYour Lucky Colors is: Brown");
printf("\nYour Personality Traits: Independent, capable, self-respecting, quick-witted");
break;

case 10: //=====================================
printf("Your chinese zodiac sign is the dog! ");
printf("Dogs are very loyal and can keep a secret!\n");
printf("Your Lucky Numbers is: 2");
printf("\nYour Lucky Colors is: Green");
printf("\nYour Personality Traits: Valiant, loyal, responsible, clever, courageous, lively");
break;

case 11: //=====================================
printf("Your chinese zodiac sign is the pig! ");
printf("Pigs are good students, honest and brave!\n");
printf("Your Lucky Numbers is: 3");
printf("\nYour Lucky Colors is: Grey");
printf("\nYour Personality Traits: Happy, honest, trusting, educated, sincere, brave");
break;
}
}while(proceed==false);
printf("\n\nHave a great day!\n\n");

}
========== Created by: https://github.com/kanekisanghouls
