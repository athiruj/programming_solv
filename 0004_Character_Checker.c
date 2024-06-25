#include <unistd.h>
#include <stdio.h>

int isChar(char *str)
{
    short u;
    short l;

    u = 0;
    l = 0;
    while(*str++)
    {
        if (*str >= 'A' && *str <= 'Z')
            u = 1;
        if (*str >= 'a' && *str <= 'z')
            l = 1;
        if (u && l)
        {
            write(1, "Mix\n", 4);
            return (1);
        }
    }
    if (u)
        write(1, "All Capital Letter\n", 19);
    if (l)
        write(1, "All Small Letter\n", 17);
    return (0);
}

int main ()
{
    char str[10000];
    scanf("%s", str);
    isChar(str);
    return (0);
}