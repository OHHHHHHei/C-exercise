#include <stdio.h>

int main (void)
{
    int n;
    scanf("%i", &n);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += i + 1;
    }
    printf("%i", result);
}