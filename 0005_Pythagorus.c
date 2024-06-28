#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b = 0;
    scanf("%lf %lf", &a, &b);
    printf("%.6f\n", sqrt(a*a + b*b));
}