#include<stdio.h>

int main() {

    int x;
    scanf("%d", & x);
    int star =x;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star--;
    }
}