#include <stdio.h>

int main ()
{
    int s = 0;
    int m = 0;
    int d = 0;
    int b = 0;

    int m_1 = m;
    int h = s * 2 - 1;
    scanf("%d %d", &s, &m);
    
    for (int g = 0; g < s; g++)
    {
        for(int l_space = 0; l_space < g; l_space++)
            printf(" ");
        for (int block = 0; block < h; block++)
        {
            if (block < m_1)
                printf(".");
            else
                printf("*");
            d++;
        }
        for(int r_space = 0; r_space < g; r_space++)
            printf(" ");
        printf("\n");
        m_1 -= h;
        h -= 2;
    }
    h += 2;
    d--;
    for (int g = s - 1; g > 0; g--)
    {
        h += 2;
        for(int l_space = 1; l_space < g; l_space++)
            printf(" ");
        for (int block = 0; block < h; block++)
        {
            if (b < d - m)
                printf(".");
            else
                printf("*");
            b++;
        }
        for(int r_space = 1; r_space < g; r_space++)
            printf(" ");
        printf("\n");
    }
}