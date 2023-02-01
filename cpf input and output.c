#include<stdio.h>
int main()
{
    char numbers[20];
    gets(numbers);
    printf("%c%c%c\n",numbers[0],numbers[1],numbers[2]);
    printf("%c%c%c\n",numbers[4],numbers[5],numbers[6]);
    printf("%c%c%c\n",numbers[8],numbers[9],numbers[10]);
    printf("%c%c\n",numbers[12],numbers[13]);
    return 0;

}
