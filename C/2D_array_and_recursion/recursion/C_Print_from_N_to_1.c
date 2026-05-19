#include<stdio.h>

void Print_N_1(int n,int i)
{
    if(i==n+1)
    {
        return;
    }
    Print_N_1(n,i+1);
    if(i==1)
    {
        printf("%d",i);
    }
    else{
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Print_N_1(n,1);
}