#include<stdio.h>
int main()
{
    printf("int size = %u bytes\n",sizeof(int));
    printf("char size = %u bytes\n",sizeof(char));
    printf("long size = %u bytes\n",sizeof(long));
    printf("long long size = %u bytes\n",sizeof(long long));
    printf("double size = %u bytes\n",sizeof(double));
    printf("float size = %u bytes\n",sizeof(float));
    printf("long double size = %u bytes\n",sizeof(long double));
    return 0;
}
