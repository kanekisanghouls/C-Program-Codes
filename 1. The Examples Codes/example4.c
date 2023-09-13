//========================= NEST LOOP ROWS AND COLUMNS =========================
#include <stdio.h>
#include <stdbool.h>
int main()
{
       int inputRow;
       int inputColumn;
       char string[20];
       int options;
       bool proceed = true;

      do{
           printf("Enter the value of input Column: ");
           scanf("%d",&inputColumn);
           printf("Enter the value of input Row: ");
           scanf("%d",&inputRow);
           printf("Input String : \n");
           scanf("%s",&string);
           printf("Your String Input is %s : \n",string);
           for(int i=1;i<=inputColumn;i++)
           {
               for(int j=1;j<=inputRow;j++)
               {
                   printf("%s\t",(string));
               }
               printf("\n");
           }


        printf("Do you want to continue?  \n1) Yes \n2) No \n");
        scanf("%d",&options);
        if(options==1)
        {
          proceed = true;
        }
        else if(options ==2)
        {
          proceed = false;
        }
        else
        {
          proceed = false;
        }
       }
       while(proceed);


       return 0;
}
