#include <stdio.h>

int main(void)
{
    //��ȡ����
    int matrix[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //�����������ǵĺ�
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