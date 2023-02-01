/* Calculation of average
/* Author: Sanjay */
/* Place – Whispering Bytes */

#include <stdio.h>
int main( )
{
int a=1189,b=841;
printf("A0 paper size = %dmm X%d mm\n",a,b);
printf("A1 paper size = %dmm X%d mm\n",b,a/2);
printf("A2 paper size = %dmm X%d mm\n",a/2,b/2);
printf("A3 paper size = %dmm X%d mm\n",b/2,a/4);
printf("A4 paper size = %dmm X%d mm\n",a/4,b/4);
printf("A5 paper size = %dmm X%d mm\n",b/4,a/8);
printf("A6 paper size = %dmm X%d mm\n",a/8,b/8);
printf("A7 paper size = %dmm X%d mm\n",b/8,a/16);
printf("A8 paper size = %dmm X%d mm\n",a/16,b/16);
return 0;
}
