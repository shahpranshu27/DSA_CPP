#include <stdio.h>
#include <stdint.h>
#include <math.h>

void print_sin_cos(double step) 
{   
    for (double x=0;x<=1;x+=step) 
	{
        printf("sin(%f)=%f\n", x, sin(x));
        printf("cos(%f)=%f\n", x, cos(x));
        
    }
}

int main()
{
    
    double step = 0;
    printf("Enter the desired step (es. 0.1):\n");
    if (scanf("%lf", &step)==1)
        print_sin_cos(step);

}
