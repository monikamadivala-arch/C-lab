#include<stdio.h>
int main(void)
{
int year;
printf("enter a year:");
scanf("%d",&year);
if((year%400==0)||(year%4==0&& year%100!=0))
printf("%dis a leap year.\n",year);
else
printf("%d is not a leap year.\n",year);
return 0;
}

