#include<stdio.h>

struct emp
{
	char name[20];
	int basic;
	int da;
	int ta;
	int ded;
	int netslry;
};
void main()
{
	struct emp e;
	printf("enter emp name : ");
	fflush(stdin);
	gets(e.name);
	printf("enter basic amt : ");
	scanf("%d",&e.basic);
	printf("enter da : ");
	scanf("%d",&e.da);
	printf("enter ta : ");
	scanf("%d",&e.ta);
	printf("enter ded : ");
	scanf("%d",&e.ded);
	e.netslry=e.basic+e.da+e.ta-e.ded;
	printf("Net salary : %d ",e.netslry);
}
