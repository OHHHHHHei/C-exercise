#include <stdio.h>

int main(void)
{
    double power, price;
    scanf("%lf", &power);
    if(power <= 150)
    {
        price = power * 0.4463;
    }else if(power <= 400)
    {
        price = (power - 150) * 0.4663 + 66.945;
    }else
    {
        price = (power - 400) * 0.5663 + 183.52;
    }
    printf("%.1lf", price);
    return 0;
}