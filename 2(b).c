#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);

for(int i=0;i<n;i++){

    int input;
    scanf("%d",&input);
    sum=sum+input;
}
    printf("%d",sum);
}
