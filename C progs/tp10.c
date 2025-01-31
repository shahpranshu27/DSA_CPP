#include<stdio.h>
void revarray(int a[],int,int);
void main()
{
int a[10],i;
printf("enter elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
revarray(a,0,9);
printf("reverse array:\n");
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
}
void revarray(int a[],int start, int end)
{
int temp;
while(start<end)
{
temp=a[start];
a[start]=a[end];
a[end]=temp;
start++;
end--;
}
}
