#include<stdio.h>
#include<stdlib.h>
int positiveSum();
int main()
{
    int n,input[10000],pos,neg,negDis[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
            input[i]=rand()%11*(-1);
        else
        input[i]=rand()%11;

        printf("%d\t",input[i]);
    }
    pos=positiveSum(input,n);
    printf("\n total positive %d",pos);


}
int positiveSum(int input[10000],int n)
{
    int po;
    for(int i=0;i<n;i++)
    {


        if(input[i]>0)
            po+=input[i];

    }
    return po;
}
