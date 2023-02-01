#include<stdio.h>
int main()
{
    int hours;
    float grosspay,tax;
    printf("enter the hours you worked\n");
    scanf("%d",&hours);
    if(hours<0)
    {
        printf("hours can't be negative\n");
    }
    else if(hours<40){
        grosspay = hours*12;
        printf("grosspay is %f\n",grosspay);
    }
    else{
        grosspay = 40*12;
        grosspay =grosspay + (hours-40)*18;
        printf("grosspay is %f\n",grosspay);

    }
    if(grosspay<300)
    {
        tax=grosspay*.15;
    }
    if(grosspay>=300&&grosspay<450)
    {
        tax=(300*.15);
        tax= tax+(grosspay-300)*.20;
    }
    else
    {
        tax=(300*.15)+(150*.20);
        tax= tax+(grosspay-450)*.25;
    }
    printf(" tax is %f\n",tax);
    printf(" net pay is %f\n",(grosspay-tax));

    return 0;

}
