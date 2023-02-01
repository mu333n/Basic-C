#include<stdio.h>
int main()
{

    double minutes,days,years;
    printf("Inpur minutes :  \n");
    scanf("%lf",&minutes);
    days = minutes/(60*24);
    years = days/365;
    printf(" days = %lf\n years = %lf",days,years);
    return 0;
}
