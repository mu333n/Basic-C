# include <stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char a[99],b[99];
    gets(a);
    gets(b);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[0]){
            if(a[i+1]==b[1])
                count++;
        }
    }
    printf("%d",count);
}
