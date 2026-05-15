#include <stdio.h>
#include <limits.h>

void Max_Min(int x, int a[])
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d %d", min, max);
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
    Max_Min(x, a);
}