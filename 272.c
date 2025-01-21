#include<stdio.h>
void wordrev(char s[],int x,int y);
void main()
{
	char s[30];
	int i,l=0,start=0;
	printf("enter string s = ");
	gets(s);
	l=strlen(s);
	for(i=0,start=0;i<l;i++)
	{
		while(s[i]!=' ' && i<l)
		{
			i++;
		}
		wordrev(s,start,i-1);
		start=i+1;
	}
	printf("reverse word=%s",s);
}
void wordrev(char s[],int x,int y)
{
	char t;
	while(x<y)
	{
		t=s[x];
		s[x]=s[y];
		s[y]=t;
		x++;
		y--;
	}
}
