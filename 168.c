//primenumber
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter start and end pnts=");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%5==0)
		printf("%d\n",i);
	}
}
