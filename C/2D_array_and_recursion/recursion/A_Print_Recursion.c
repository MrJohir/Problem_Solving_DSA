#include<stdio.h>

void Print_Recursion(int n, int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("I love Recursion\n");
    Print_Recursion(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    Print_Recursion(n,1);
}