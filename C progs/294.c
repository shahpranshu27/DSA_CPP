#include<stdio.h>
struct stud
{
	int rn;
	char name[50];
	char add[100];
	int m[5];
};
void main()
{
	int i;
	struct stud s;
	printf("enter details of student : ");
	printf("enter roll no. : ");
	scanf("%d",&s.rn);
	printf("enter name of student : ");
	fflush(stdin);
	gets(s.name);
	printf("enter address of student : ");
	fflush(stdin);
	gets(s.add);
	printf("enter marks : ");
	for(i=1;i<5;i++)
	{
		printf("marks of sub %d  = ",i++);
		scanf("%d",&s.m[i]);
	}
	printf("roll no. : %d",s.rn);
	printf("name of student : %s",s.name);
	printf("address  of student : %s",s.add);
	for(i=0;i<5;i++)
	{
		printf("marks of sub %d of student : %d",s.m[i]);
	}
	
}
