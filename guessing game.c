#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int enteredNumber=99;
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand()%21;
    int attemp=5;
    printf("This is a guessing game\n\nI have chosen a number between 0 and 20,\n you must guess the number \n\n");

    //printf("%d\n",randomNumber);
    while(enteredNumber!=randomNumber)
        {
            printf("You have %d attemp left\n\n",attemp);
            scanf("%d",&enteredNumber);
            attemp--;
            if(attemp==0)
            {
                printf("you failed\n\nthe number was %d\n",randomNumber);
                return 0;
            }
            if(enteredNumber<0||enteredNumber>20)
                printf("I said it's between 0 to 20\n\n");
            if(enteredNumber>randomNumber)
                printf("the number is lower than that\n\n");
            if(enteredNumber<randomNumber)
                printf("the number is higher than that\n\n");


        }
    printf("Congratulations, You have guessed the right number\n\n");

    return 0;

}
