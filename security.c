#include<stdio.h>
int main()
{
    char *a;
    char *b;
    b = "mueen";
    printf("%s \n", b);
    printf("who are you?\n");
    scanf("%s", &a);
    if(a==b){
        printf("welcome mueen");
        }
    else
        printf("you are not the owner \n get lost please :)\n ");

    return 0;

}
