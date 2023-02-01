#include<stdio.h>
int main()
{
    int n,i;

    int sum=0;
    printf("\n\nPlease Enter The Value Of n:");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {


    if(i==1)
        printf(" %d!/%d ",i,i);
    else
        printf(" +  %d!/%d ",i,i);
        sum+=(factorial(i)/i);

    }

printf(" = %d\n\n",sum);
}

int factorial(int n)
{


    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);




}

