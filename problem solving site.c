#include <stdio.h>
int main()
{
    int quantity,person;
    scanf("%d",&quantity);
    for(int i=0;i<quantity;i++){
        scanf("%d",&person);
        switch(person)
        {
        case 1:
            printf("Rolien\n");
            break;
            case 2:
            printf("Naej\n");
            break;
            case 3:
            printf("Elehcim\n");
            break;
            case 4:
            printf("Odranoel\n");
            break;
            default:
                printf("unknown employee\n");
        }
    }
}
