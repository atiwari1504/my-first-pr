#include<stdio.h>
main()
{
int a[30];
int n,i,j,temp,d;
printf("\n Enter the Number of Elements : ");
scanf("%d",&n);
printf("\n Enter the Elements of Array  : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the Elements to be deleted  : ");
scanf("%d",&d);
for(i=0;i<n;i++)
{
	if(a[i]==d)
	{
		for(j=i;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		n--;
	}
}
printf("\n Modified Array is \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}

