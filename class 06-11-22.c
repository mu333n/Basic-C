#include<stdio.h>
int summition(int b)
{
    return (b*(b+1))/2;
}

int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=summition(n);
    printf("%d",sum);
    return 0;

}
