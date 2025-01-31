#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
  double sinVal, radianVal, degreeVal;
  printf("enter angle in degree :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180);
  sinVal = sin(radianVal);
  
  printf("\n The Sin value of %f = %f ", degreeVal, sinVal);
  
  return 0;
}
