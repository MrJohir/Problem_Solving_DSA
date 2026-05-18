#include <stdio.h>

void printing(int a){
    for(int i=1; i<a; i++){
        printf("%d ", i);
    }
    printf("%d", a);
}
int main() {
    int a;
    scanf("%d", &a);
    printing(a);
}