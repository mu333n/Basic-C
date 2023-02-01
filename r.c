#include<stdio.h>
float calculator();
int main()
{
    float yesorno;
    top:
    calculator();
    printf("\n\ndo you wanna leave?\n\n\nyes = 1\nno = 2\n\n");
    scanf("%f",&yesorno);
    if(yesorno==2)
    {
        goto top;
    }
    return 0;
}
float calculator()
{
    float num1,num2,yesorno;
    char operator;
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
            printf("Math Error");
        else
            printf("%f\n",num1/num2);
            break;
    default:
            printf("Syntax error\n");
            break;

    }
}
