#include<stdio.h>
int main()
{
    double salary,rate,output;
    scanf("%lf",&salary);
    if(salary<0)
        return 0;
    if(salary<=400){
    rate=salary*0.15;
    output=salary+rate;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",output,rate);
    }
    else if(salary<=800){

    rate=salary*0.12;
    output=salary+rate;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",output,rate);
    }
    else if(salary<=1200){
    rate=salary*0.10;
    output=salary+rate;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",output,rate);
    }
    else if(salary<=2000){
    rate=salary*0.07;
    output=salary+rate;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",output,rate);
    }
    else if(salary>2000)
    {
        rate=salary*0.04;
        output=salary+rate;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",output,rate);
    }
    else
        return 0;
    return 0;



}
