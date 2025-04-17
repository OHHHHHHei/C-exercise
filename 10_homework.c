#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int integer[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &integer[i]);
        if(integer[i] < 0)//过滤负数
        {
            i--;//减少索引
            n--;//减少总数
        }
        else
        {
            for(int j = 0; j < i; j++)//检查是否重复
            {
                if(integer[i] == integer[j])
                {
                    i--;//减少索引
                    n--;//减少总数
                    break;
                }
            }
        }
    }
    for(int i = 0; i < n - 1; i++)//冒泡排序
    {
        int swap = 0;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(integer[j] < integer[j + 1])
            {
                int temp = integer[j];
                integer[j] = integer[j + 1];
                integer[j + 1] = temp;
                swap = 1;//标记已经排序过
            }
        }
        if(swap == 0)
        {
            break;
        }
    }
    for(int i = 0; i < n; i ++)
    {
        printf("%i", integer[i]);
        if(i != n - 1)
        {
            printf(" ");//打印空格
        }
    }
    return 0;
}


