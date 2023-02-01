#include<stdio.h>
int main()
{
    double first=0,second=1,third=0;
    int n=0;
    printf("how many number you wanna see ? \n");
    top:

    scanf("%d",&n);
    if(n<0){
        printf("please enter a positive value\n");
        goto top;
    }
    if(n==1)
        printf("0 ");
    if(n==0)
    goto end;
    else
    printf("0 1 ");

    fibonakki(n);
    for(int i=0;i<n-2;i++)
    {
        third=first+second;
        printf("%2.lf ",third);
        first=second;
        second=third;


    }
    end:
    return 0;

}
int fibonakki(double i)
{
    double first=0,second=1,third=0;
    i=i-2;
    third=first+second;
        printf("%2.lf ",third);
        first=second;
        second=third;

}

