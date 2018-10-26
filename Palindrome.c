#include<stdio.h>
#include<string.h>
main()
{
char string[100];
int flag=0,i;
printf("\n Enter the String : ");
gets(string);
for(i=0;i<strlen(string)/2;i++)
{
if(string[i]!=string[strlen(string)-i-1])
{
flag=1;
break;
}
}
if(flag==1)
printf("\n Entered string is Not Palindrome \n");
else
printf("\n Entered string is Palindrome \n");
}
