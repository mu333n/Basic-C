#include<stdio.h>
int main(){
 int n,term;
 printf("Please enter the term you want to find?\n");
 scanf("%d",&n);
 term=fibonacci(n);
 printf("%dth term of Fibonacci series is %d",n,term);
 return 0;
}
int fibonacci(int n)
{
 if (n==1)
 return 0;
 else if (n==2)
 return 1;
 else
 return fibonacci(n-1) + fibonacci(n-2);
}
