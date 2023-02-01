#include<stdio.h>
int main()
{
    int sum=0;
    char idnum[100];
    printf("enter your student id\n");
    gets(idnum);
    for(int i=0;i<strlen(idnum);i++)
    {
        if(idnum[i]>='0'&&idnum[i]<='9')
            sum+=(idnum[i]-48);
    }

    printf("%d",sum);
    return 0;

}
