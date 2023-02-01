#include<stdio.h>

int main()
{
    float yesorno;

    float num1,num2;
    int x,y;
    char ArithmeticOparetor;
        top:
    printf("Enter your expression\n");
    scanf("%f%c%f",&num1,&ArithmeticOparetor,&num2);
    x=(int)num1;
    y=(int)num2;
    switch (ArithmeticOparetor)
    {
    case '+':
        if(x==num1 && y==num2)
        {
            printf("%d\n",x+y);
        }
        else
        {
            printf("%f\n",num1+num2);
        }
        break;
    case '-':
        if(x==num1 && y==num2)
        {
            printf("%d\n",x-y);
        }
        else
        {
            printf("%f\n",num1-num2);
        }
        break;
    case '*':
        if(x==num1 && y==num2)
        {
            printf("%d\n",x*y);
        }
        else
        {
            printf("%f\n",num1*num2);
        }
        break;
    case '/':
        if(num2 == 0)
            printf("Math Error");
        else
            printf("%f\n",num1/num2);
            break;
    case '%':
        if(y == 0)
            printf("Math Error");
        else
            printf("%d\n",x%y);
            break;

    default:
            printf("Syntax error\n");
            break;

    }
    printf("\n\ndo you wanna leave?\n\n\nyes = 1\nno = 2\n\n");
    scanf("%f",&yesorno);
    if(yesorno==2)
    {
        goto top;
    }
    return 0;
}
