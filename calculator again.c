#include<stdio.h>
int main()
{
    float num1,num2;
    char operator;
    printf("Enter your expression\n");
    scanf("%f%c%f",&num1,&operator,&num2);
    switch (operator)
    {
    case '+':
        printf("%f",num1+num2);
        break;
    case '-':
        printf("%f",num1-num2);
        break;
    case '*':
        printf("%f",num1*num2);
        break;
    case '/':
        if(num2 == 0)
            printf("%2.f/0",num1);
        else
            printf("%f",num1/num2);
            break;
    default:
            printf("Syntax error");
            break;

    }
    return 0;
}
