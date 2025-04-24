#include <stdio.h>

long long factorial(int a)
{
    long long result = a;
    if(result == 1)
    {
        return result;
    }
    if(result == 0)
    {
        return 1;
    }
    result = result * factorial(a - 1);
    return result;
}


int main(void)
{
    int n;
    scanf("%i", &n);
    long long totalsum = 0;
    for (int i = 1; i <= n; i++)
    {
        totalsum += factorial(i);
    }
    printf("%lld", totalsum);
    return 0;
}