#include<stdio.h>
int main()
{
    int a, b, c;
    a=30;//0001 1110
    b=20;//0001 0100
    c = a ^ b;//0000 1010
    printf("%d\n",c);
    a = a << 2;//0111 1000
    printf("%d",a);


    return 0;
}
