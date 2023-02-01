#include<stdio.h>
int main()
{
    int a=-987654321,b=987654321987654321,c;
    c=a*b;
    printf("%d\n",c);
    printf("%u\n",a*b+987654321987654321);
    printf("%lld\n",a*b);
    printf("%c",c);
    return 0;
}
