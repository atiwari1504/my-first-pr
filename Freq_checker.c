#include<stdio.h>
main()
{
int i,j,k,n,c=0,a[100],f[100];
printf("\n Enter the Number of Elements : ");
scanf("%d",&n);
printf("\n Enter the Elements of Array  : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	c=1;
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			c++;			
			for(k=j;k<n-1;k++)
			{
				a[k]=a[k+1];
			}
			n--;j--;
		}
		
	}
	f[i]=c;
}
printf("\n Elements of Array\t : ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n Frequency corresponding to each element : ");
for(i=0;i<n;i++)
printf("%d\t",f[i]);
printf("\n\n");
}
