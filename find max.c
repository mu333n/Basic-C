#include<string.h>
int main()
{
    int n,binary[9];
    scanf("%d",&n);
    int i=0;
    while(n!=0)
    {
        binary[i]=n%2;
        printf("%d",binary[i]);
        n=n/2;

    }

  return 0;
}
