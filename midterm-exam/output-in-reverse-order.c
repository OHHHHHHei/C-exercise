#include <stdio.h>

int main(void)
{
    int num, result = 0;
    scanf("%i", &num);
    while(num != 0)
    {
        result = result * 10 + num % 10;
        num = num / 10;
    }

    printf("%i", result);
    return 0;
}