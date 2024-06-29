
// ( X1 + X2 ) / 2 = S
// input    X1 S
// output   X2
//
//  ( 2 * S ) - X1 = X2
// i.e.
// 4 3 => 2
// ( 2 * 3 ) - 4 = 2

#include <stdio.h>

int main ()
{
    int x, s = 0;
    scanf("%d %d", &x, &s);
    printf("%d\n", 2 * s - x);
}