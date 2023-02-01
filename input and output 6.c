#include<stdio.h>
int main()
{
    int a[10];
    char number[10];
    gets(number);
    for(int i=6;i<strlen(number);i++)
    {
       a[i-6]=number[i];
       a[i-6]-=48;

    }
    for(int i=0;i<strlen(number)-4;i++)
    {

    a[i+6]=number[i];
    a[i+6]-=48;


    }
    for(int i=0;i<3;i++)
    {
    printf("%d",a[i]);
    }
    printf("%c",number[5]);
    for(int i=6;i<10;i++)
    {
    printf("%d",a[i]);
    }
    return 0;



    return 0;
}

