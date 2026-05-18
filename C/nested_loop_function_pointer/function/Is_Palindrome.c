#include <stdio.h>

int is_palindrome(int length, char S[]){
    int flag=1;
    for(int i=0, j=length-1; i<j; i++,j--)
    {
        if(S[i]!=S[j])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main(){
    char S[1001];
    scanf("%s", &S);
    int length=strlen(S);
    int result = is_palindrome(length,S);
    if(result==1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}