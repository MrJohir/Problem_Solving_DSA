#include <stdio.h>

int sumation(int a, int b){
    return a+b;
}
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    // int result = sumation(a,b);
    printf("%d", sumation(a,b));
}

