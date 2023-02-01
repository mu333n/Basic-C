#include<stdio.h>
int main()
{
    int number,remainder;
    printf("enter the number to test  = ");
    scanf("%d",&number);
    remainder = number%2;
    if(remainder == 0)
        printf("this number is even");
    else
        printf("this number is odd");
    return 0;

}
