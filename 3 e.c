#include<stdio.h>
int main()
{
    int a,ans=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        arr[i]=10*(i+1);

    }
    ans=arr[a-3]*arr[a-2];
    if(a==1)
        printf("you got 200 taka");
    else if(a==2)
        printf("You got 200 taka");
    else
        printf("you got %d taka",ans);


}
