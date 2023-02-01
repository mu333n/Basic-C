#include<stdio.h>
int main()
{
    double first,second,common;
    printf("enter the first number = ");
    scanf("%lf",&first);
    printf("enter the second number = ");
    scanf("%lf",&second);
    common = first;
    first = second;
    second = common;
    printf("\nthe swipe numbers are \n first =  %2.lf \n second=  %2.lf\n",first,second);
    return 0;
}
