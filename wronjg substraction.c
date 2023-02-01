#include<stdio.h>
int main()

{
    int number,count;
    scanf("%d%d",&number,&count);
    for(int i=0;i<count;i++)
    {
       if(number%10==0)
        number=number/10;
       else
        number=number-1;
    }
    printf("%d",number);
    return 0;
}
