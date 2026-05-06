#include <stdio.h>
int main()
{
    int n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &n);
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }


    // int pass;
    // while(scanf("%d", &pass)){
    //     if(pass == 1999){
    //         printf("Correct\n");
    //         break;
    //     }
    //     else{
    //         printf("Wrong\n");
    //     }
    // }
}