#include <stdio.h>
/*
int main(){
    int a, b, share, remainder;
    scanf("%d %d", &a, &b);
    share = a / (b * 10);
    remainder = a % (b * 10);
    printf("%d \n%d", share * 10, remainder);

    return 0;
}*/
int strlen(char str[])
{
    int len;
    for (len = 0; str[len]; ++len)
    {
        ; // do nothing
    }
    return len;
}

void revstr(str[], len)
{
}
int main()
{
    char A[1001] = {0}, B[1001] = {0}, res[1002] = {0};
    int carry = 0;
    scanf("%s", &A);
    printf("%d %s %s %s", strlen(A), A, B, res);
}