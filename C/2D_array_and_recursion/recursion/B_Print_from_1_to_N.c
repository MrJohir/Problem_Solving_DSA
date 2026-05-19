#include<stdio.h>

void Print_1_N(int n, int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("%d\n", i);
    Print_1_N(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    Print_1_N(n,1);
}