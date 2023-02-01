#include<stdio.h>
#include<math.h>
int main()
{
    double a1,a2,b1,b2,distance;
    scanf("%lf%lf",&a1,&b1);
    scanf("%lf%lf",&a2,&b2);
    distance=sqrt(((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1)));
    printf("%.4lf\n",distance);
}
