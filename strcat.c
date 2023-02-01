#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    scanf("%s ",&a);
    scanf("%s ",&b);
    strcat(a,b);
    printf("%s",a);
    char c[20];
    scanf("%s",&c);
    strcat(a,c);
    printf("%s",a);
}
