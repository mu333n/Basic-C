#include<stdio.h>
#include<math.h>
int main()
{
    int a, c, d;
    char b;
    scanf("%d%c%d", &a, &b, &c);
    if(b=='+')
    {
        d=a+c;
        printf("%d", d);
    }
    else if(b=='-')
    {
        d=a-c;
        printf("%d", d);
    }
    else if(b=='*')
    {
        d=a*c;
        printf("%d", d);
    }
    else if(b=='/')
    {
        d=a/d;
        printf("%d", d);
    }
    else
        printf("error syntax");
    return 0;
}
