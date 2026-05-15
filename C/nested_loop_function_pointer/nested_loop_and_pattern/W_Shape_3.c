#include<stdio.h>

int main() {

    int x;
    scanf("%d", & x);
    int star2=1;
    int space2=x-1;
    for(int i=1; i<=x; i++){
        for(int s =1; s<=space2; s++){
            printf(" ");
        }
        for(int j=1; j<=star2; j++){
            printf("*");
        }
        space2--;
        printf("\n");
        star2 +=2;
    }
    
    
    int star = 2*x-1;
    int space = 0;
    for (int i = 1; i <= x; i++) {
        for (int s = 1; s <= space; s++) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
        space++;
        star -= 2;
    }
}