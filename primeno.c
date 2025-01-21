//primenumber
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter number=");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	{
		printf("Prime number");
	}
	else
	{
		printf("Composite number");
	}
	
}
