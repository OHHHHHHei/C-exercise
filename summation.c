#include <stdio.h>
int gcd(int a, int b);

int main(void)
{
    int n;//定义存储分子分母的数组
    scanf("%i", &n);
    long long denominator[n];
    long long numerator[n];

    long long numerator_sum = 0, integer;
    long long numeratorfinal;
    long long numeratorfake;
    long long lcm = 1;//初始化最小公倍数
    for(int i = 0; i < n; i++)
    {
        scanf("%lld/%lld", &numerator[i], &denominator[i]);//读取分子分母
        
        int factor = gcd(lcm, denominator[i]);//最大公因数
        lcm = lcm  * denominator[i] / factor;//求最小公倍数
    }
    for(int i = 0; i < n; i++)
    {
        numerator[i] = numerator[i] * lcm / denominator[i];//化分子
        numerator_sum += numerator[i];
    }
    int is_negative = 0;// 记录符号并取绝对值处理
    if (numerator_sum < 0) 
    {
        is_negative = 1;
        numerator_sum = -numerator_sum;
    }
        numeratorfinal = numerator_sum / gcd(numerator_sum, lcm);//化简分子
        lcm /= gcd(numerator_sum, lcm);//化简分母
        integer = numeratorfinal / lcm;
        numeratorfinal = numeratorfinal % lcm;
        if (integer == 0) //整数等于0
        {
            if (numeratorfinal == 0)//分子等于0
                printf("0");
            else if (is_negative)
                printf("-%i/%i", numeratorfinal, lcm);
            else
                printf("%i/%i", numeratorfinal, lcm);
        } 
        else 
        {
            if (numeratorfinal == 0)
                if (is_negative)
                    printf("-%d", integer);
                else
                    printf("%d", integer);
            else
                if (is_negative)
                    printf("-%d %i/%i", integer, numeratorfinal, lcm);
                else
                    printf("%d %i/%i", integer, numeratorfinal, lcm);
        }
        return 0;
}

int gcd(int a, int b)//辗转相除法求最大公因数
{
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}