
#include<stdio.h>
void JustF(int a, int p)
{
    printf("a= %d , p= %d\n",a,p);
    a*=2;
    printf("%d %d\n",a,p);
}
void NotF(int *a,int p)
{
    printf("*a= %d , p= %d\n",*a,p);
    JustF(*a,p);
    p=0;
    return;
    printf("\n %d %d",*a,p);
}
int main()
{
    int p=6,q=3,*a;
    a=&q;
    *a=p+q;
    printf("*a = %d\n",*a);
    NotF(a,p);
    printf("%d %d\n",p,q);


}
