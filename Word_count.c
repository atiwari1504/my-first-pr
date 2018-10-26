#include<stdio.h>
main()
{
int w=0,j;
char string[50];
printf("\n Enter the string : ");
gets(string);
for(j=0;string[j]!='\0';j++)
{
if(string[j]==' ')
w++;
}
printf("\n No of words in the String = %d\n",w+1);
}
