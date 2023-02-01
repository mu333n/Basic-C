#include<stdio.h>
int main()
{
    int i, n;
    float sum=0.0;
    printf("\n\nPlease Enter The Value Of n:");
    scanf("%d",&n);
    printf("\n");

     for(i=1;i<=n;i++){

        if(i==1)
            printf(" %d!/%d ",i,i);
        else
            printf(" +  %d!/%d ",i,i);


        sum+=((float)into(i)/(float)i);
    }

    printf(" = %f\n\n",sum);
    return 0;
}

int into(int s)
{
    if(s<=1)
        return 1;
    else
    return s*into(s-1);

}
