#include <stdio.h>

int bingbao(int n)
{
    if (n % 2 == 0)
    {
        n = n / 2;
    } else {
        n = n * 3 + 1;
    }
    return n;
}

int main(void)
{
    int n;
    scanf("%i", &n);
    int num = 0;
    int arr[100000];
    arr[num++] = n;
    while (n != 1)
    {
        n = bingbao(n);
        arr[num++] = n;
    }
    
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%i", arr[i]);
        if (i != 0){
            printf(" ");
        }
    }
    return 0;
}