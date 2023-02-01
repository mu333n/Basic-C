#include<stdio.h>
int main()
{
    int i = 10;
    int newnum = 10* i++;
    i=i+1;
    printf("%d\n",newnum);
    printf("%d",i);
    return 0;
}
