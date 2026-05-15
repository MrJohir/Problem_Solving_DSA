#include <stdio.h>

void Shift(int x, int a[])
{
    for (int i = 0; i < x; i++)
    {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i] == 0)
            printf("%d ", a[i]);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    int a[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    Shift(x, a);
}