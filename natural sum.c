#include<stdio.h>
int main()
{
    double a,b;
    double sum;
    scanf("%lf%lf",&a,&b);
    if(a<1||a>b||b<a||b>1000000000)
        return 0;
    sum=(a+b)*(b-a+1)/2;
    printf("%.0lf\n",sum);
    return 0;
}
