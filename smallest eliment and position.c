#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);

    if(n<0||n>1000)
        return 0;
    char numbers[n];
    gets(numbers);
    for(i=0;i<strlen(numbers);i++)
    {
        if(numbers[i]>='0'&&numbers[i]<='9')
            numbers[i]=(numbers[i]-48);
    }
    for(j=0;j<n;j++)
        {
        if (numbers[0] > numbers[j])
            {
            numbers[0] = numbers[j];
            x=j;
            }
        }

    printf("Menor valor: %d\n", numbers[0]);
    printf("Posicao: %d\n",x);

    return 0;
}

