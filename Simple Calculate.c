#include<stdio.h>
int main()
{
    int a,b,x,y;
    float h,i;
    scanf("%d%d%f",&a,&b,&h);
    scanf("%d%d%f",&x,&y,&i);
    printf("VALOR A PAGAR: R$ %.2f\n",(b*h)+(y*i));

}
