#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
  double sinVal, radianVal,x;
  printf("enter angle in degree:");
  scanf("%lf", &x);
  if(x>0 || x<90)
  {
    radianVal = x * (PI/180);
	sinVal = sin(radianVal);
  }
  else
  {
  	printf("Please enter from given range");
  }
  printf("\n The Sin value of %f=%f ",x, sinVal);
  return 0;
}
