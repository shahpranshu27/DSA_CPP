#include<stdio.h>
void main()
{
	int n1,n2,i,j,f;
	printf("enter 2 nos. : ");
	scanf("%d%d",&n1,&n2);
	printf("prime nos. betn %d and %d : ",n1,n2);
	for(i=n1;i<=n2;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%d,",i);
		}
	}
}
