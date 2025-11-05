#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int weekly = n / 52;
    for (int x = 100; x > 0; x--)
    {
        if ((weekly - 7 * x) % 21 == 0)
        {
            int k = (weekly - 7 * x) / 21;
            
            // 检查 k 是否为正整数
            if (k > 0)
            {
                printf("%d\n%d", x, k);
                return 0;  // 找到答案就退出
            }
        }
    }
    
    return 0;
}