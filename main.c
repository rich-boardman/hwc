#include <stdio.h>
#include <math.h>

int main()
{
    double d = -123.456;
    printf("Hello, World!\n");
    printf("The value of d is %f, fabs is %f and sqrt(fabs(d)) is %f\n", d, fabs(d), sqrt(fabs(d)));
    return 0;
}
