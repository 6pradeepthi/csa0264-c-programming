#include<stdio.h>
void main()
{
int number;
printf("enter the number:");
scanf("%d",&number);
if(number>0)
printf("%dis a positive number\n",number);
else if(number<0)
printf("%d is a negitive number\n",number);
else
printf("%d is zero");
}
