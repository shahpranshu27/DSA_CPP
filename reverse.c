#include<stdio.h>
void main()
{
	int a[10],i,n,m;
	printf("enter n;");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements;");
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		a[n-i-1]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
