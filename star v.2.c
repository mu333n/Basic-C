#include<stdio.h>
int main()
{
    int row=0,coloum;
    while(row<5)
        {
            printf("\n");

        for(coloum=0;coloum<=row;coloum++)
        {
            printf("*");
        }

        row++;
        }
}
