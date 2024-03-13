#include <stdio.h>
int main ()
{ int n, k, h, summFrantz, priceF, priceW, priceR, priceFull;

printf("ENTER width");
scanf("%d",&n);
printf("ENTER lenght");
scanf("%d",&k);
printf("ENTER height");
scanf("%d",&h);
printf("enter Smm Frantz");
scanf("%d",&summFrantz);

priceF=priceW=priceR=priceFull=0;
priceF=n*k*1000;
priceW=(n*h*500+k*h*500)*2;
priceR= (n*k*700)+h*100;
if (priceFull>=summFrantz)
{
printf("Yes");
}
else
{priceFull=priceFull-summFrantz;
    printf("NO %d",priceFull-summFrantz);
   
}
return 0;
}
