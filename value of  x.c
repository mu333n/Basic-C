#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%lf\n",x1);
        printf("x1=%lf\n",x2);

    }
    else
    {
        e=sqrt(-1*d);
        printf("x1= (-%lf+%lfi)/%lf\n",b,e,2*a);
        printf("x2= (-%lf-%lfi)/%lf",b,e,2*a);
    }
    return 0;
}
