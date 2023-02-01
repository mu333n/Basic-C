int main()
{
    int x,y=0;
    top:
    scanf("%d",&x);



    printf("%d\n",x);
    printf("%d\n",x);
    printf("%d\n",x);

    printf("%d\n",x);
    printf("%d\n",x);
    middle:
    printf("%d\n",x);

    printf("do you wanna continue? press 1 to yes or 0 to no?\n");
    scanf("%d",&y);
    if(y==1)
        goto top;
    else if(y==2)
        goto middle;
    else
        return 0;







}
