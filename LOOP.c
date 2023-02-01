#include<stdio.h>
int main()
{
    int numbers,sum=0,count;
    printf("How many numbers you wanna sum?\n");
    scanf("%d",&count);
    for(numbers=1;numbers<=count;++numbers)
    {
        sum+=numbers;
    }
    printf("%d",sum);
    return 0;
}
