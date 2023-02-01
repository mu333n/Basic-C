#include<stdio.h>
int main()
{
    enum companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum companies xerox = XEROX;
    enum companies google = GOOGLE;
    enum companies ebay = EBAY;
    printf("%d\n%d\n%d\n",xerox,google,ebay);
return 0;
}

