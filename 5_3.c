#include <stdio.h>

int main(void)
{
    //�����һ������
    int n;
    scanf("%i", &n);
    int integer[2][20];
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &integer[0][i]);
    }
    //����ڶ�������
    int m;
    scanf("%i", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%i", &integer[1][i]);
    }
    int notcommon[n + m];
    int num = 0;
    //����һ�������в��ڵڶ��������е�����
    for(int i = 0; i < n; i++)
    {
        int repeat = 0;
        for(int j = 0; j < m; j++)
        {
            if(integer[0][i] == integer[1][j])
            {
               repeat = 1;
               break;
            }
        }
        if(repeat != 1)
        {
            int duplicate = 0;
            for(int k = 0; k < num; k++)
            {
                if(notcommon[k] == integer[0][i])
                {
                    duplicate = 1;
                    break;
                }
            }
            if(duplicate != 1)
            {
                notcommon[num] = integer[0][i];
                num++;
            }
        }
    }
    //���ڶ��������в��ڵ�һ�������е�����
    for(int i = 0; i < m; i++)
    {
        int repeat = 0;
        for(int j = 0; j < n; j++)
        {
            if(integer[1][i] == integer[0][j])
            {
                repeat = 1;
                break;
            }
        }
        //����ǲ����ظ����
        if(repeat != 1)
        {
            int duplicate = 0;
            for(int k = 0; k < num; k++)
            {
                if(notcommon[k] == integer[1][i])
                {
                    duplicate = 1;
                    break;
                }
            }
            if(duplicate != 1)
            {
                notcommon[num] = integer[1][i];
                num++;
            }
        }
    }
    for(int i = 0; i < num; i++)
    {
        printf("%i", notcommon[i]);
        if(i != num - 1)
        {
            printf(" ");
        }
    }
    return 0;   
}