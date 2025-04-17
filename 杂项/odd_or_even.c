#include <stdio.h>

int main(void)
{
    int n, m, a = 0, odd_num = 0, even_num = 0;
    scanf("%i", &n);
    int num[n] ;
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &num[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0)
        {
            even_num++;
        }else
        {
            odd_num++;
        }
    }
    printf("%i %i", odd_num, even_num);
    return 0;
}