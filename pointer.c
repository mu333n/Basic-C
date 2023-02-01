#include<stdio.h>
int main(){

int a,b,*m,*n;
scanf("%d%d",&a,&b);
m=&a;
n=&b;
printf("%d",*m+*n);



}
