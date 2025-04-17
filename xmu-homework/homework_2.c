#include <stdio.h>

int main(void)
{
    long long num;
    int count[10] = {0}; // 用于统计0-9各数字出现的次数
    int max_count = 0;   // 记录最大出现次数
    scanf("%lld", &num);
    // 特殊情况处理：如果输入为0
    if (num == 0) 
    {
        printf("result:\n0:1\n");
        return 0;
    }
    
    while (num > 0) 
    {
        int digit = num % 10;  // 获取最后一位数字
        count[digit]++;        // 该数字的计数加1
        num /= 10;             // 去掉最后一位
    }
    
    // 找出最大出现次数
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > max_count) 
        {
            max_count = count[i];
        }
    }
    
    // 输出结果
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