#include <stdio.h>

int main(void)
{
    int m, count = 0;
    scanf("%i", &m);
    do
    {
        count++;
        m = m / 10;//�ı�m��ֵ����Ȼ����������ѭ��
    } while (m != 0);
    printf("%i", count);
    return 0;
}