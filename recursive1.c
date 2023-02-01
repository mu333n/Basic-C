#include <stdio.h>

 void printNumbers(int);



 void printNumbers(int n)
 {
   static int count = 1;
   if(count<=n){

   printf("%d", count);

   count++;}

   if(count==n){
        backwords(count);



        return 0;



   }


   printNumbers(n); // recursive call
 }
 int backwords(int i)
 {
     for(i-1;i>0;i--)
        printf("%d",i);
 }


 void main()
 {
  int num;

  printf("Enter any number : ");

  scanf("%d",&num);

  printNumbers(num);

 }

