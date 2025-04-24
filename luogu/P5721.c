#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%02d", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}