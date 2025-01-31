#include<stdio.h>
void main()
{
int choice;
printf("Enter choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Addition\n");
add();
break;
case 2:printf("Substraction\n");
sub();
break;
default:
printf("Wrong choice");
}
}
void add()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter elements for matrix -A\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Entered Elements for matrix -A\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter elements for matrix -B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Entered Elements for matrix -B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Addition of matrix A and B is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
void sub()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter elements for matrix -A\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Entered Elements for matrix -A\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter elements for matrix -B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Entered Elements for matrix -B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Substraction of matrix A and B is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
