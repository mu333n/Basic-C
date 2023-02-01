#include<dos.h>
#include<stdio.h>

int main()
{
int a;
 struct date dt;


    getdate(&dt);
           a=dt.da_year;
           printf("%d",a);

}
