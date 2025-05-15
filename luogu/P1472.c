#include <stdio.h>

int main(void)
{
    int n = 1;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        if (arr[i] != 0)
        {
            n++;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        printf("%ld", arr[i]);
        if (i != 0)
        {
            printf(" ");
        }
    }
    return 0;
}