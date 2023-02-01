#include <stdio.h>
int main()
{
 float a,b;
 char name[10];
 scanf("%s\n",name);
 scanf("%f%f",&a,&b);

 printf("TOTAL = R$ %.2f\n",a+(b*15/100));

}
