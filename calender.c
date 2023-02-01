#include<stdio.h>
int main()
{



     char *months[]={"january","Fabuary","March","April","May","June","July","August","september","October","November","December"};
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,totalDays,weekDay=0,spaceCounter=0,year;
printf("Enter your favorite year :");
scanf("%d",&year);
printf ("\n\n*******************Welcome to %d ****************\n\n",year);


// cheak if it is leap year
if ((year%4==0 && year%100!=0) || (year%400==0))
   {
       daysInMonth[1]=29;
   }


    //get the first day of year
    weekDay = (year*365 + ((year-1) / 4) - ((year-1) / 100) + ((year-1) / 400)) % 7;

    for  (i=0;i<12;i++)
    {
        printf ("\n......................%s......................\n",months[i]);
        printf ("\n      Sun     Mon     Tue     Wed     Thu     Fri     Sat\n\n ");

        for (spaceCounter = 1;spaceCounter<=weekDay ; spaceCounter++)
        {
            printf("        ");
        }
         totalDays = daysInMonth[i];
         for (j = 1;j <= totalDays;j++)

         {
        printf("%8d", j);
        weekDay++;

         if (weekDay>6)
                   {
                       weekDay=0;
                       printf ("\n");
                   }


         }




    }

}

