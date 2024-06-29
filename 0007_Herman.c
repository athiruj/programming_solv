#include <stdio.h>
#include <math.h>

// Triangle 1/2 * b * h
// 4 Triangle 2 * b * h

// Circle pi * r ^ 2

// r = 1
// reg = 3.141593
// taxi = 2.000000

// r = 21
// reg = pi * 21 * 21 = 1,385.442360
// taxi = 2 * 21 * 21 = 822.000000

int main (void)
{
    int r = 0;
    scanf("%d", &r);

    printf("%.6Lf\n%.6f\n", pow(r,2) * (long double)3.141592653589793238462643383279502884197169399375105820974944, pow(r, 2) * 2);
}