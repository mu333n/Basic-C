#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50],brr[50];
    gets(arr);
    for(int j=0,i=(strlen(arr)-1);i>=0;i--,j++)
        brr[j]=arr[i];
    if(strcmp(arr,brr)==0)
        printf("yes");
    else
        printf("no");

}
