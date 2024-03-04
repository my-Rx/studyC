#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            printf(" ");
        }
        for (int k = 0; k < i; ++k)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n; i > 0; --i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j < i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
