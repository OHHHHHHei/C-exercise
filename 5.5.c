#include <stdio.h>

int main(void)
{
    int num[2][10];

    //��ʼ������
    for(int i = 0; i < 10; i++)
    {
        num[0][i] = i;
    }
    //��ȡ�������ֵĸ���
    for(int i = 0; i < 10;i++)
    {
        scanf("%i", &num[1][i]);
    }



    for(int j = 1; j < 10; j ++)//��1��ʼ����ֹ��λ��0
    {
        if(num[1][j] != 0)
        {
            printf("%i", num[0][j]);
            num[1][j]--;
            break;//һ���ҵ���һ����0���־��˳�
        }
    }

    
    for(int i = 0; i < 10; i++)
    {
        if(num[1][i] != 0)
        {
            printf("%i", num[0][i]);
            num[1][i]--;
            i--;//����һλ������ֹ������ֻ��в���
        }
    }
    return 0;
}




