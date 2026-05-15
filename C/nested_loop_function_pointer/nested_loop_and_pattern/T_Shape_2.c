#include<stdio.h>

int main() {

    int x;
    scanf("%d", & x);
    int star = 1;
    int space = x - 1;
    for (int i = 1; i <= x; i++) {
        for (int s = 1; s <= space; s++) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        space--;
        printf("\n");
        star += 2;
    }
}
