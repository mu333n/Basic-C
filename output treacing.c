#include <stdio.h>
void justf(int a,int p)
{
        a*=2;
        printf("%d %d \n",a,p);

}
void notf(int *a,int p)
{
    justf(*a,p);
    p=0;
    return ;
    printf("\n %d %d",*a,p);
}
int mian()
{
    int p=6,q=3,*a;
    a=&q;
    *a=p+q;
    notf(a,p);
    printf("%d %d \n",p,q);
}
