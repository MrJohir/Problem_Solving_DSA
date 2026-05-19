#include<stdio.h>

void Print_Even_Indices(int n, int a[], int i)
{
    if(i==n)
    {
        return;
    }
   
    Print_Even_Indices(n,a,i+1);
     if(i%2==0)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    Print_Even_Indices(n,a,0);
}