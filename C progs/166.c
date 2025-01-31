//primenumber1
#include<stdio.h>
void main()
{
	int n,i,j,cnt=0;
	printf("enter number=");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		cnt=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			printf("%d\n",j);
		}
	}
	
}
