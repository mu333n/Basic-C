#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter Two Numbers to compare\n");
    scanf("%d%d",&a,&b);
    i=minormax(a,b);
    if(i==1)
        printf("First Num is MAX and Secoend Num Is MIN\n");
    else
        printf("First Num is MIN and Secoend Num Is MAX\n");
    return 0;
}
int minormax(int a,int b)
{
    if(a>b)
        return 1;
    else
        return 2;
}
