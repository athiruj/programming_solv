#include <stdio.h>

int main ()
{
    int num[3];
    char abc[3];
    int temp;

    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    scanf("%s", abc);

    for (int outside = 0; outside < 3; ++outside)
    {
        for (int inside = 0; inside < 3; inside++)
        {
            if (abc[outside] > abc[inside] && num[outside] < num[inside])
            {
                temp = num[inside];
                num[inside] = num[outside];
                num[outside] = temp;
            }
        }
    }
    printf("%d %d %d\n", num[0], num[1], num[2] );
}