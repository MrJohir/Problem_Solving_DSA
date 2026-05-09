#include <stdio.h>

void sum(int a, int b)
{

    int sumvalue = a + b;
    printf("%d", sumvalue);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}