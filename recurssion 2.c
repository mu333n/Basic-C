#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    printnum(a);
    return 0;
}
int printnum(int x)
{
    int i=1;
    if(i==x)
        return 0;
    else
        printf(" %d +",pow(x,i));
        i++;

}
