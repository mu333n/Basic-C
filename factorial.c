#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}
int factorial(int a)
{
    if(a==1)
        return 1;
    else
        return a*factorial(a)-1;
}
