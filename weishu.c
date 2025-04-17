#include <stdio.h>

int main(void)
{
    int m, count = 0;
    scanf("%i", &m);
    do
    {
        count++;
        m = m / 10;//改变m的值，不然会陷入无限循环
    } while (m != 0);
    printf("%i", count);
    return 0;
}