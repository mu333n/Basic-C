#include<stdio.h>
int main()
{
    float a[100]={0},sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        printf("%f",a[i]);
    }
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%f",sum);



    return 0;
}
