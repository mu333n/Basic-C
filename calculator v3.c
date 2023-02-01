#include<stdio.h>
float calculator(float num,float numb);
int main()
{
    float a,b,yesorno;
    top:
    calculator(a,b);
    printf("\n\ndo you wanna leave?\n\n\nyes = 1\nno = 2\n\n");
    scanf("%f",&yesorno);
    if(yesorno==2)
    {
        goto top;
    }
    else
    {
        printf("Press any key");
    }

}

float calculator(float num1,float num2)
{
    int x,y;
    char oper;//oper = Operator
    printf("Enter 2 numbers:\n");
    scanf("%f\n%f",&num1,&num2);
    x=(int)num1;
    y=(int)num2;
    printf("Enter your Operator\n");
    scanf("\n%c",&oper);
    switch (oper) //oper = Operator
    {
    case '+':
        if(x==num1 || y==num2)
        {
            printf("%d\n",x+y);
        }
        else
        {
            printf("%f\n",num1+num2);
        }
        break;
    case '-':
        if(x==num1 || y==num2)
        {
            printf("%d\n",x-y);
        }
        else
        {
            printf("%f\n",num1-num2);
        }
        break;
    case '*':
        if(x==num1 || y==num2)
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
}
