#include<stdio.h>
int main()
{
    int num[5]={10,20,30,40,50};
    int *ptr=num+3;

    printf("pointer is pointing at %d\n",*ptr);

    printf("the  array has started at %d\n",*(num+1));
    return 0;
}
