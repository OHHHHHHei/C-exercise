#include <stdio.h>
#include <string.h>

#define MAXN 100000

int main(void)
{
    int n;
    scanf("%d", &n);
    
    int sum[MAXN] = {0};
    int s_len = 1;
    
    int fact[MAXN] = {0};
    fact[0] = 1;
    int f_len = 1;
    
    for (int i = 1; i <= n; i++)
    {
        // ���� i!���߾��ȳ˷���
        int carry = 0;
        for (int j = 0; j < f_len; j++)
        {
            int prod = fact[j] * i + carry;
            fact[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            fact[f_len++] = carry % 10;
            carry /= 10;
        }
        
        // �� i! �ӵ� sum���߾��ȼӷ���
        carry = 0;
        for (int j = 0; j < f_len || carry; j++)
        {
            int s = carry;
            if (j < s_len) s += sum[j];
            if (j < f_len) s += fact[j];
            sum[j] = s % 10;
            carry = s / 10;
            if (j >= s_len) s_len++;
        }
    }
    
    // �������
    for (int i = s_len - 1; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }
    printf("\n");
    
    return 0;
}