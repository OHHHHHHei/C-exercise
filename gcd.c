#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int a, b;
    scanf("%i %i", &a, &b);
    int c = gcd(a, b);
    printf("%i", c);
    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}