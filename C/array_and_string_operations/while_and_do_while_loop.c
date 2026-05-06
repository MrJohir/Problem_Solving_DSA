#include<stdio.h>
int main(){
    //**while loop**
    // int n;
    // int sum =0;
    // int i=1;
    // scanf("%d", &n);
    // while(i<=n){
    //     sum = sum+i;
    //     i++;
    // }
    // printf("Sum=%d",sum);

    //**do while loop**
    int n;
    int sum=0;
    int i=1;
    scanf("%d", &n);
    do{
        sum= sum+i;
        i++;
        
    }
     while(i<=n);
     printf("Sum=%d",sum);
}