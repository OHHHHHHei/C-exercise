#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long input;
    scanf("%ld", &input);
    long reversed = 0;

    long n = abs(input);
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (input < 0) reversed = -reversed;

    printf("%ld", reversed);
}