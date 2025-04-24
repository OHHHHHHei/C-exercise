#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%i %i", &n, &x);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        //复制用于拆分
        int temp = i;

         // 如果当前数字就是要找的数字x (针对x=1到9)
         if (temp == x)
         {
             count++;
             continue; // 处理完当前数字，继续下一个
         }

        //计算位数
        while (temp > 0)
        {
            int digit = temp % 10;
            if(digit == x)
            {
                count++;
            }

            temp /= 10;
        }

    }
    printf("%i", count);
    return 0;
}