#include <stdio.h>

int main(void)
{
    long long num;
    int count[10] = {0}; // ����ͳ��0-9�����ֳ��ֵĴ���
    int max_count = 0;   // ��¼�����ִ���
    scanf("%lld", &num);
    // ������������������Ϊ0
    if (num == 0) 
    {
        printf("result:\n0:1\n");
        return 0;
    }
    
    while (num > 0) 
    {
        int digit = num % 10;  // ��ȡ���һλ����
        count[digit]++;        // �����ֵļ�����1
        num /= 10;             // ȥ�����һλ
    }
    
    // �ҳ������ִ���
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > max_count) 
        {
            max_count = count[i];
        }
    }
    
    // ������
    printf("result:\n");
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] == max_count) 
        {
            printf("%d:%d\n", i, count[i]);
        }
    }
    return 0;
}