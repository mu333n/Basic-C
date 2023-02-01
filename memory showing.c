#include <stdio.h>
#include<string.h>

void binstr(int a, int n)
{
    char ch[8];
    int i;
    for(i=0;i<n;i++)
    {
        if(a%2==0)
            ch[n-i-1]='0';
        else
            ch[n-i-1]='1';

        a=a/2;
    }


    ch[n]='\0';
    printf("%s",ch);
}



void print_bytes(void *ptr, int size)
{
    unsigned char *p = ptr;
    int i,string_length;
    for (i=size-1; i>=0; i--) {
         string_length=p[i];
         //printf("%d ",string_length);
         binstr(string_length,8);

    }
    printf("\n");
}

int main()
{
    int x;
    printf("give a integer number\n");
    scanf("%d",&x);
    float y;
    printf("give a fractional number\n");
    scanf("%f",&y);
    print_bytes(&x, sizeof(x));
    print_bytes(&y, sizeof(y));
}
