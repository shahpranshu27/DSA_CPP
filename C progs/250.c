#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
 char string[100], longest[30];
 int count = 0, max = 0,i,j,index=0,length;
 printf("Enter Sentence:\n");
 gets(string);
 length = strlen(string);
 index=0;
 for( i = 0 ; i< length ; i++)
 {
  if(string[i] != ' ')
  {
   count++;
  }
  else
  {
   if(count > max)
   {
    max = count;
    index = i-max;
   }
   count = 0;
  }
 }
 if(count>max)
 {
  max = count;
  index = length-max;
 }
 j=0;
 for(i=index;i< index+max;i++)
 {
  longest[j] = string[i];
  j++;
 }
 longest[j] = '\0';
 printf("Longest word is: %s\n", longest);
 printf("And its length is: %d",max);
 getch();
 return 0;
}
