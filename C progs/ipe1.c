#include<stdio.h>
struct item
{
    int code;
    char name[20];
    int qty;
}a[10],t;
void main()
{
    int i,j,n;
    printf("enter n : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("item %d \n",i);
        printf("code,name,qty");
        scanf("%d%s%d",&a[i].code,&a[i].name,&a[i].qty);
    }
    for( i = 0; i < n-1 ; i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i].code>a[j].code)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("after sorting on code : \n ");
        for(i=0;i<n;i++)
        {
            printf("%d/t%s/t%d/t\n",a[i].code,a[i].name,a[i].qty);
        }
    }
    
    
}