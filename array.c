#include<stdio.h>

int main()
{
    int i;
    int A[10];
    for (i=0;i<10;i++)
    {
        printf("Enter the value of A[%d]=\n",i);
        scanf("%d",&A[i]);
    }
    printf("%d",A[5]);

}
