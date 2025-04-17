#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c)
    {
        int temp =b;
        b = c;
        c = temp;
    }
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int fenzi = a;
    a = a / gcd(fenzi, c);
    c = c / gcd(fenzi, c);
    printf("%i/%i", a, c);
    return 0;
}

int gcd(int a, int b)
{
    if(a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(b == 0)
    {
        return a;
    }else
    {
        return gcd(b, a % b);
    }
}