#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
int a=0,d=0,s=0,j;
char string[50];
printf("\n Enter a String");
gets(string);

for(j=0;j<strlen(string);j++)
{
if(isalpha(string[j]))
a++;
else if(isdigit(string[j]))
d++;
else
s++;
}
printf("\n Number of Alphabets=%d",a);
printf("\n Number of Digits=%d",d);
printf("\n Number of Special characters=%d",s);
}
