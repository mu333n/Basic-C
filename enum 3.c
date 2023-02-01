#include<stdio.h>
int main()
{
    enum family{MUNTASIR = 1,MUJAHID,AFIA,MUEEN,AMMU,ABBU};
    enum family small = MUNTASIR;
    enum family medium = MUJAHID;
    enum family girl = AFIA;
    enum family elder = MUEEN;
    enum family mom = AMMU;
    enum family dad = ABBU;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",small,medium,girl,elder,mom,dad);
    return 0;

}
