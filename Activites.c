//============================ PALINDROME ACTIVITY ============================
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int number;
    int originalNumber;
    int reverseNumber;
    int sum = 0;
    int remainder;
    int choices;
    bool repeat = false;

    printf("\nPalindrome or not Palindrome [Activity]\n");

 do{
    printf("\nLet's see if your number is Palindrome or Not Palindrome\nPlease enter any number: ");
    scanf("%ld", &number);

    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        printf("\nRemainder is %d\n", remainder);
        reverseNumber = (reverseNumber * 10) + remainder;
        printf("Reversed Number is %d\n", reverseNumber);
        number = number / 10;
        printf("\nThe new number is %d\n", number);
    }

    if (reverseNumber == originalNumber)
    {
        printf("The user-entered number is a PALINDROME number.\nSince Reversed Number %d is equal to User- entered number %d\n",reverseNumber, originalNumber);

    }
    else
    {
     printf("The user-number is NOT A PALINDROME number. \nSince Reversed Number %d is NOT equal to User- entered number %d\n",reverseNumber, originalNumber);

    }

    printf("\nDo you want to continue?\n");
    printf("[1] Yes or [2] No\n");
    printf("Answer: ");
    scanf("%d", &choices);

    if(choices == 1)
    {
            repeat = true;
    }
    else if(choices == 2)
    {
            repeat=false;
    }

 }while(repeat);


printf("\nHave a great day!\n");


    return 0;

}
========== Created by: https://github.com/kanekisanghouls

//============================ ODD AND EVEN ACTIVITY ============================
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main ()
{
    int i,n;
    int choices;
    bool repeat =false;

    printf("\nOdd and Even [Activity]\n");
    printf("\nPlease enter any number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

    // Even
    {
    if(i%2==0)
    {
    printf("%d is Even\n",i);
    }

    // Odd
    else
    {
    printf("%d is Odd\n",i);
    }
    }
do{
    printf("\nDo you want to continue?\n");
    printf("[1] Yes or [2] No\n");
    printf("Answer: ");
    scanf("%d", &choices);

    if(choices == 1)
    {
            repeat = true;
    }
    else if(choices == 2)
    {
            repeat=false;
    }

 }while(repeat);


printf("\nHave a great day!\n");

    getch();
    return 0;
}
========== Created by: https://github.com/kanekisanghouls

//============================ HOROSCOPE 2023 ACTIVITY ============================

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int month,day,year;
    int choice;
    int proceed,proceed1;
    int options;

    system("color A");

    // INTRODUCTION
    printf("\n===============================");
    printf("\n         Horoscope 2023        ");
    printf("\n===============================");
    printf("\n     \\--> Let us know what is your Birth Month, birth date, and birth year ! \n\n");

    // ZODIAC SIGNS/HOROSCOPE
    printf("\n These are Zodiac Signs/Horoscope\n");
    printf("\n - Aries \n - Taurus \n - Gemini");
    printf("\n - Cancer \n - Leo \n - Virgo");
    printf("\n - Libra \n - Scorpio \n - Sagittarius");
    printf("\n - Capricorn \n - Aquarius \n - Pisces\n\n");
    system("pause");
    system("cls");

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

    printf("\nPlease Enter your Birth Year (1995-2015): ");
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
printf("Alright! Let's get to know your Lucky Number/Color.\n\n");

    system("pause");
    system("cls");


do{
    printf("   \nWhat Month Are You Again?");
    printf("   \n1:January \n2:February \n3:March \n4:April \n5:May");
    printf("   \n6:June \n7:July \n8:August \n9:September \n10:October \n11:November \n12:December #");
    scanf("%d",&options);
    switch (options) {
    case 1: //===========================
        printf("\n You choose: January\n");
    if(month == 12 && day>=22 && day<=31 || month == 1 && day<=19 && day>0)
        printf("Your Zodiac Sign is Capricorn.\n");
        printf("Your Lucky Number: 6, 9 and 8\n");
        printf("Your Lucky Color: White, red and blue");
        printf("\nYour Personality is Attractive\n");
        break;


    case 2: //===========================
        printf("\n You choose: February\n");
    if(month == 1 && day>=20 && day<=31 || month == 2 && day<=17 && day>0)
        printf("Your Zodiac Sign is Aquarius.\n");
        printf("Your Lucky Number: 3, 9 and 2\n");
        printf("Your Lucky Color: Yellow and Red");
        printf("\nYour Personality is Innocent\n");
        break;


    case 3: //===========================
        printf("\n You choose: March\n");
    if(month == 2 && day>=18 && day<=29 || month == 3 && day<=19 && day>0)
        printf("Your Zodiac Sign is Pisces.\n");
        printf("Your Lucky Number: 3 and 7\n");
        printf("Your Lucky Color: Sea Green and Aqua");
        printf("\nYour Personality is Kind\n");
        break;


    case 4: //===========================
        printf("\n You choose: April\n");
    if(month == 3 && day>=20 && day<=31 || month ==4  && day<=19 && day>0)
        printf("Your Zodiac Sign is Aries.\n");
        printf("Your Lucky Number: 9, 8 and 6\n");
        printf("Your Lucky Color: Blue and blue green");
        printf("\nYour Personality is Hate Everyone\n");
        break;


    case 5: //===========================
        printf("\n You choose: May\n");
    if(month == 4 && day>=20 && day<=30 || month == 5 && day<=20 && day>0)
        printf("Your Zodiac Sign is Taurus.\n");
        printf("Your Lucky Number: 6 and 5\n");
        printf("Your Lucky Color: White and Green");
        printf("\nYour Personality is Selfish\n");
        break;


    case 6: //===========================
        printf("\n You choose: June\n");
    if(month == 5 && day>=21 && day<=31 || month == 6 && day<=20 && day>0)
        printf("Your Zodiac Sign is Gemini.\n");
        printf("Your Lucky Number: 3 and 5\n");
        printf("Your Lucky Color: Yellow and Green");
        printf("\nYour Personality is Wrothless\n");
        break;


    case 7: //===========================
        printf("\n You choose: July\n");
    if(month == 6 && day>=21 && day<=30 || month == 7 && day<=22 && day>0)
        printf("Your Zodiac Sign is Cancer.\n");
        printf("Your Lucky Number: 2, 7 and 9\n");
        printf("Your Lucky Color: White, Cream, Red and Yellow");
        printf("\nYour Personality is Lovely\n");
        break;


    case 8: //===========================
        printf("\n You choose: August\n");
    if(month == 7 && day>=23 && day<=31 || month == 8 && day<=22 && day>0)
        printf("Your Zodiac Sign is Leo.\n");
        printf("Your Lucky Number: 1, 4 and 9\n");
        printf("Your Lucky Color: Orange, Gold and Red");
        printf("\nYour Personality is Comedy\n");
        break;


    case 9: //===========================
        printf("\n You choose: September\n");
    if(month == 8 && day>=23 && day<=31 || month == 9 && day<=22 && day>0)
        printf("Your Zodiac Sign is Virgo.\n");
        printf("Your Lucky Number: 3, 6 and 7\n");
        printf("Your Lucky Color: Green, White and Yellow");
        printf("\nYour Personality is Always Happy\n");
        break;


    case 10: //===========================
        printf("\n You choose: October\n");
    if(month == 9 && day>=23 && day<=30 || month == 10 && day<=22 && day>0)
        printf("Your Zodiac Sign is Libra.\n");
        printf("Your Lucky Number: 5, 6 and 9\n");
        printf("Your Lucky Color: Blue, Jade Green");
        printf("\nYour Personality is Sensitive\n");
        break;


    case 11: //===========================
        printf("\n You choose: November\n");
    if(month == 10 && day>=23 && day<=31 || month == 11 && day<=21 && day>0)
        printf("Your Zodiac Sign is Scorpio.\n");
        printf("Your Lucky Number: 3, 9 and 4\n");
        printf("Your Lucky Color: Yellow, Red and Orange");
        printf("\nYour Personality is Beautiful\n");
        break;


    case 12: //===========================
        printf("\n You choose: December\n");
    if(month == 11 && day>=22 && day<=30 || month == 12 && day<=21 && day>0)
        printf("Your Zodiac Sign is Sagittarius.\n");
        printf("Your Lucky Number: 6, 5, 3 and 8");
        printf("Your Lucky Color: Light Blue, White, Cream and Orange, Black and Red");
        printf("\nYour Personality is Ugly\n");
        break;
    }

}while(proceed==false);

return 0;
}
========== Created by: https://github.com/kanekisanghouls


//============================ CHINSE ZODIAC ACTIVITY ============================
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
