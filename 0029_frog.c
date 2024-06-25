#include <stdio.h>

int main ()
{
    int x;
    int y;
    int time;

    time = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
        time++;
    while (y > 0)
    {
        time++;
        y -= x;
    }
    printf("%d", time);
}