#include <stdio.h>

// 检查两个数字是否只包含0-9中的10个不同数字
int is_valid(int abcde, int fghij)
{
    int flag[10] = {0}; // 标记数字0-9是否已使用

    // 检查abcde的每一位
    int temp = abcde;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (flag[digit])
        {
            return 0; // 数字重复
        }
        flag[digit] = 1;
        temp /= 10; 
    }
    
    // 检查fghij的每一位(包括前导零)
    temp = fghij;
    int digits = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (flag[digit])
        {
            return 0; // 数字重复
        }
        flag[digit] = 1;
        temp /= 10;
        digits++;
    }
    
    // 如果fghij不是5位数，检查前导零
    for (int i = digits; i < 5; i++) {
        if (flag[0]) {
            return 0; // 0已经被使用过
        }
        flag[0] = 1; // 记录前导零
    }

    // 关键修改：检查所有数字0-9是否都被使用
    for (int i = 0; i < 10; i++)
    {
        if (flag[i] == 0)
        {
            return 0; // 有数字未使用，不满足条件
        }
    }
    return 1;
}


int main(void)
{
    int n;
    scanf("%i", &n);
    for(int fghij = 1234; fghij <=98765; fghij++)
    {
        int abcde = fghij * n;


        if(abcde < 10000 || abcde > 99999)
        {
            continue;
        }
        if(is_valid(abcde, fghij))
        {
            printf("%05d/%05d=%d\n", abcde, fghij, n);
        }
    }
return 0;

}














