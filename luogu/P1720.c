#include <stdio.h>
#include <stdlib.h>

double fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%.2lf", fibonacci(n));
    return 0;
}