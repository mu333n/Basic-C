#include<stdio.h>
int main()
{

    int products,quantity,code;
    double value1=1.50,value2=2.50,value3=3.50,value4=4.50,value5=5.50,sum=0;
    scanf("%d",&products);
    for(int i=0;i<products;i++){
            scanf("%d %d",&code,&quantity);
    switch(code)
    {
    case 1001:
    sum+=value1*quantity;
    break;
    case 1002:
    sum+=value2*quantity;
    break;
    case 1003:
    sum+=value3*quantity;
    break;
    case 1004:
    sum+=value4*quantity;
    break;
    case 1005:
    sum+=value5*quantity;
    break;
    default:
        printf("unknown product\n");

    }


    }
    printf("%.2f\n",sum);

}
