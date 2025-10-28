#include <stdio.h>

int isprime(long n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int ispalindrome(long n)
{
    long original = n;
    long reversed = 0;
    
    //反转数字
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    //看原来的和反转的是否相等
    return original == reversed;

    return 1;
}


int main(void)
{
    long start;
    long end;
    scanf("%ld %ld",  &start, &end);

    for (long i = start; i <= end; i++)
    {
        if (ispalindrome(i))
        {
            if (isprime(i))
            {
                printf("%ld\n", i);
            }
            
        }
    }

    return 0;

}