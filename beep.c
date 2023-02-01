#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main()
{

    int i=0;


        printf("\n\n\t\t\tWelcome!\n\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        menu();
        return 0;
}
int menu()
{
    char choice;
    printf("\n\n\t\t\tBANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\tMAIN MENU");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n");
    printf("\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n");

    menu:

    choice=getch();


    switch(choice)
    {
        case '1':new_acc();
        break;
        case '2':edit();
        break;
        case '3':transact();
        break;
        case '4':see();
        break;
        case '5':erase();
        break;
        case '6':view_list();
        break;
        case '7':logout();
        break;
        default:
            printf("\n\n\t\tPlease press a valid number\n");
        goto menu;

    }



}
new_acc()
{

}
edit()
{

}

transact()
{

}
see()
{

}
erase()
{

}
view_list()
{

}

logout()
{

}
int fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
