#include <stdio.h>

int main() {

    int n,k,i,j,number;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            scanf("%d",&number);
            if(number==1)
                printf("Rolien\n");
            else if(number==2)
                printf("Naej\n");
            else if(number==3)
                printf("Elehcim\n");
            else if(number==4)
                printf("Odranoel\n");
        }
    }
    return 0;
}
