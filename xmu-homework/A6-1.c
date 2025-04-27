#include <stdio.h>

int main(void)
{
    //读取矩阵
    int matrix[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //计算坐下三角的和
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += matrix[i][j];
        }
    }

    printf("%i", sum);
    return 0;

}