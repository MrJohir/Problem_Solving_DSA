#include<stdio.h>
int main(){
    int n,x;
    scanf("%d", &n);
    int pos_sum = 0, neg_sum = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(x>0){
            pos_sum += x;
        }
        else{
            neg_sum += x;
        }
    }
    
    // int a[n];
    // for(int i=0; i <=n ; i++){
    //     if(x>0){
    //         pos_sum += i;
    //     }
    //     else{
    //         neg_sum += i;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]>0){
    //         pos_sum += a[i];
    //     }
    //     else{
    //         neg_sum += a[i];
    //     }
    // }
    printf("%d %d", pos_sum, neg_sum);
}