#include<stdio.h>


int sum(){
    int a,b;
    scanf("%d %d", &a, &b);
    int sumvalue = a+b;
    return sumvalue;
}

int main(){
   
    int ans= sum();
    printf("%d", ans);
    return 0;
}