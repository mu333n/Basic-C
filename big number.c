#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%i%i%i",&num1,&num2,&num3);
    if(num1>num2)
        if(num1>num3)
    {
        printf("%i",num1);
    }
    if(num2>num1)
        if(num2>num3)
    {
        printf("%i",num2);
    }
    if(num3>num1)
        if(num3>num2)
    {
        printf("%i",num3);
    }
    return 0;
}
