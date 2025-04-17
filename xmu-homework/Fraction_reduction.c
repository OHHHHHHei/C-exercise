#include <stdio.h>

int main(void)
{
    int numerator, denominator, numerator_re, denominator_re, max, m = 0;
    scanf("%i/%i", &numerator, &denominator);
    if (denominator == 0) //考虑特殊情况分母不能为0
    {
        printf("分母不能为零\n");
        return 1;
    }
    if(numerator > denominator)
    {
        max = numerator;
    }else
    {
        max = denominator;
    }
    int factor[max];
    for(int i = 1; i <= numerator && i <= denominator; i++)
    {
        if(numerator % i ==0 && denominator % i ==0)
        {
            factor[m] = i;
            m++;
        }
    }
    numerator_re = numerator / factor[m - 1];
    denominator_re = denominator / factor[m - 1];
    printf("%i/%i", numerator_re, denominator_re);
    return 0;
}