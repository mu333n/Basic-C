#include<stdio.h>
struct covid{
    int firstDoseDate,secondDoseDate,boosterDoseDate;
}moderna,astraZeneca;
int main()
{

    moderna.firstDoseDate=10;
    moderna.secondDoseDate=19;
    moderna.boosterDoseDate=31;


    astraZeneca=moderna;


    printf("i have taken the first dose on %d\n",astraZeneca.firstDoseDate);
    printf("i have taken the second dose on %d\n",astraZeneca.secondDoseDate);
    printf("i have taken the booster dose on %d\n",astraZeneca.boosterDoseDate);


}
