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
