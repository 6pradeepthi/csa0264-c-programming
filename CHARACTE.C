#include<stdio.h>
int main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("character is an ALPHABET.");
}
else
{
printf("character is not ALPHABET.");
}
return 0;
}