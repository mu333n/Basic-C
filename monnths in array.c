#include<stdio.h>
int main()
#define MONTHS 12
{
    int days[MONTHS]={31,28,[4]=31,31,30,31,[0]=30,31};
    for(int i=0;i<MONTHS;i++)
        printf(" month %d has %d days\n",i+1,days[i]);
}
