#include<stdio.h>
int main()
{
    double hight, weidth, parameter, area;
    printf("input hight: \n");
    scanf("%lf", &hight);
    printf("input weidth: \n");
    scanf("%lf", &weidth);
    parameter = 2*(hight+weidth);
    printf("Parameter is = %f\n", parameter);
    area = hight*weidth;
    printf("Area is = %f\n", area);
    return 0;
}
