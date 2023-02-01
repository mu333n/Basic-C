#include<stdio.h>
int main()
{
    char a[10]="9";
    int *b;

    *b=&a;
    printf("%x",b);
}
