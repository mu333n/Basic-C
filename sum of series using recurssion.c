
#include<stdio.h>
int main()
{
    int n,i;

    int sum=0;

    scanf("%d",&n);

    sumofn(n);

printf(" = %d",sum);
}

int factorial(int n)
{


    int sum=1;
    for(int j=n;j>0;j--)
    {


        sum*=j;
    }


    return sum;



}
int sumofn(int n)
{
    int static sum=0;
   sum+=(factorial(n)/n);

   n--;

   if(n<1)
    return 0;

}
