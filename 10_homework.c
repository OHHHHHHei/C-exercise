#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int integer[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &integer[i]);
        if(integer[i] < 0)//���˸���
        {
            i--;//��������
            n--;//��������
        }
        else
        {
            for(int j = 0; j < i; j++)//����Ƿ��ظ�
            {
                if(integer[i] == integer[j])
                {
                    i--;//��������
                    n--;//��������
                    break;
                }
            }
        }
    }
    for(int i = 0; i < n - 1; i++)//ð������
    {
        int swap = 0;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(integer[j] < integer[j + 1])
            {
                int temp = integer[j];
                integer[j] = integer[j + 1];
                integer[j + 1] = temp;
                swap = 1;//����Ѿ������
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
            printf(" ");//��ӡ�ո�
        }
    }
    return 0;
}


