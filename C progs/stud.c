#include<stdio.h>
struct stud
{
    int rn;
    char name[20];
    int m1,m2,m3;
    int tot;
    float p;
};
void main()
{
    struct stud s;
    printf("enter roll no : ");
    scanf("%d",&s.rn);
    printf("enter name : ");
    fflush(stdin);
    gets(s.name);
    printf("enter marks of maths : ");
    scanf("%d",s.m1);
    printf("enter marks of physics : ");
    scanf("%d",s.m2);
    printf("enter marks of computer : ");
    scanf("%d",s.m3);
    s.tot=s.m1+s.m2+s.m3;
    printf("Total marks : %d ",s.tot);
    s.p=(float)s.tot/3;
    printf("Percentage : %f ",s.p);
}
