#include <stdio.h>

int main(void)
{
    int n, amount, price, price_total, amount_buy;
    scanf("%i", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%i %i", &amount, &price);
        if(n % amount == 0)
        {
            amount_buy = n / amount;
        }else
        {
            amount_buy = n / amount + 1;
        }
        if(amount_buy * price < price_total || i == 0)
        {
            price_total = amount_buy * price;
        }
    }
    printf("%i", price_total);
    return 0;
}
