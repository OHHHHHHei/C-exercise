#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%i %i", &n, &k);
    int a_num = 0;
    float a_count = 0;
    int b_num = 0;
    float b_count = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if(i % k == 0)
        {
            a_num += i;
            a_count++;
        }else
        {
            b_num +=i;
            b_count++;
        }
    }
    printf("%.1f %.1f", a_num / a_count, b_num / b_count);
    return 0;

}
