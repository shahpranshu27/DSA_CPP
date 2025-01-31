#include<stdio.h>
void main()
{
	int a[10],i,n,max=0,emax=0,omax=0;
	printf("enter n;");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements;");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	emax=a[0];
	omax=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			emax=a[i];
		}
		else if(a[i]%2==1)
		{
			omax=a[i];
		}
	}
	printf("even max=%d",emax);
	printf("odd max=%d",omax);
}
