#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printnum(a);
}
int printnum(int x)
{
    int count = 1;

   printf("%d\n", count);

   count++;

   if (count == x+1)
       /*count--;
       if(count==0)*/
        return;

}
