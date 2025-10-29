#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long n;
    scanf("%ld", &n);
    
    long max_prime_factor = 0;

    while (n % 2 == 0)
    {
        max_prime_factor = 2;
        n /= 2;
    }
    
    for (long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            max_prime_factor = i;
            n /= i;
        }
    }

    if (n > 1)
    {
        max_prime_factor = n;
    }
    
    printf("%ld", max_prime_factor);

    return 0;
    
}