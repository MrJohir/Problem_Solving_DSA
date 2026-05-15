#include <stdio.h>
#include <stdbool.h>

void Count_Distinc_Number(int n, int a[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool equal = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                equal = false;
                break;
            }
        }
        if (equal == true)
        {
            count++;
        }
    }

    printf("%d", count);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    Count_Distinc_Number(n, a);
    return 0;
}