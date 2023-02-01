#include<stdio.h>
int main()
{

    int grades[10];
    int count=10;
    int sum=0;
    float avarage=0.0;
    printf("Input grade numbers\n");
    for(int i=0;i<count;i++)
    {
        printf("%d > \n",i+1);
        scanf("%d",&grades[i]);
        sum+=grades[i];

    }
    avarage=(float)sum/count;
    printf("the avarage is = %2.0f\n",avarage);
    return 0;
}
