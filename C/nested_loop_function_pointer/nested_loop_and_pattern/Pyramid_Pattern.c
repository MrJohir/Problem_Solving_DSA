#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= space; j++)
        // {
        //     // space++;
        //     printf(" ");
        // }

        for (int j = 1; j <= star; j++)
        {
            printf("%c", j+64);
            // printf("*");
        }
        printf("\n");
        star += 1;
        // space +=1;
    }
}