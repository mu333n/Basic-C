#include<stdio.h>
int main()
{
    enum months {JANUARY,february,march,april,may,june,july,august,september,octobor,november,DECEMBER};
    enum months january = JANUARY;
    enum months december = DECEMBER;
    printf("%d\n%d",january,december);
    return 0;
}
