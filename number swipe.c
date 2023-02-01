#include<stdio.h>
int main()
{
    double first,second;
    printf("enter the first number = ");
    scanf("%lf",&first);
    printf("enter the second number = ");
    scanf("%lf",&second);
    first=first+second;
    second=first-second;
    first=first-second;

    printf("\nthe swipe numbers are \n first =  %2.lf \n second=  %2.lf\n",first,second);
    return 0;
}
