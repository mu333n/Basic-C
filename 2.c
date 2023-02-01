int main()
{
    int n=5;
    int sum=1;
    for(int j=n;j>0;j--)
    {
        printf("%d",j);
        sum*=j;
    }
    printf("\n\n%d",sum);
    return 0;

}
