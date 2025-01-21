#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i=0,j=0;
	printf("enter string a:");
	gets(a);
	printf("enter string b:");
	gets(b);
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		a[i]=b[j];
		j++;
		i++;
	}
	a[i]='\0';
	printf("\nResult = %s",a);
}
