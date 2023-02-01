#include<stdio.h>
int main()
{
    float num1,num2,yesorno;
    char operator;
    top:
    printf("Enter your expression\n");
    scanf("%f%c%f",&num1,&operator,&num2);
    switch (operator)
    {
    case '+':
        printf("%f\n",num1+num2);
        break;
    case '-':
        printf("%f\n",num1-num2);
        break;
    case '*':
        printf("%f\n",num1*num2);
        break;
    case '/':
        if(num2 == 0)
            printf("%2.f/0\n",num1);
        else
            printf("%f\n",num1/num2);
            break;
    default:
            printf("Syntax error\n");
            break;

    }
    printf("\n\ndo you wanna leave?\n\n\nyes = 1\nno = 2\n\n");
    scanf("%d",&yesorno);
    if(yesorno==2)
        {
        goto top;
        }
    return 0;
}

