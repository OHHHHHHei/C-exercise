#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int integer[n];
    for(int i = 0;i < n; i++)
    {
        scanf("%i", &integer[i]);
    }
    for(int i = 0; i < n / 2; i++)
    {
        int temp = integer[i];
        integer[i] = integer[n - i - 1];
        integer[n - i - 1] = temp;
    }
    for(int i = 0; i < n; i ++)
    {
        printf("%i", integer[i]);
        if(i != n)
        {
            printf(" ");
        }
    }
    return 0;
}