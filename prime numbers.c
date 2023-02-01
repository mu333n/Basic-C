#include<stdio.h>
int main()
{
    int baseprimes[2]={2,3};
    int primes[100];
    printf("2\n3\n5\n7\n");
    for(int i=5;i<=100;i=i+2)
    {
        primes[i]=i;
        if(primes[i]%2!=0)
            {
            if(primes[i]%3!=0)
                if(primes[i]%5!=0)
                if(primes[i]%7!=0)
            printf("%d\n",primes[i]);
            }



    }

}
