#include <stdio.h>

int main()
{
    int PriceTotal, productTotalCount;
    scanf("%d \n%d", &PriceTotal, &productTotalCount);
    int sum = PriceTotal;
    for (int i = 0; i < productTotalCount; i++)
    {
        int price, productCount;
        scanf("%d %d", &price, &productCount);
        sum -= price * productCount;
    }
    if (sum == 0)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
