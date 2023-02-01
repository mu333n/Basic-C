#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    if(n>46)
    return 0;
    int numbers[45]={0,1};
    if(n==1)
        printf("0 ");
    if(n==0)
        return 0;
    else
    printf("0 1");

    for(int i=0;i<n-2;i++)
    {
        numbers[2]=numbers[0]+numbers[1];
        printf(" %d",numbers[2]);
        numbers[0]=numbers[1];
        numbers[1]=numbers[2];


    }
    printf("\n");
    return 0;

}
