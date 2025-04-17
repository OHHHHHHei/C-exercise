#include <stdio.h>

int main(void)
{
    //输入第一组数组
    int n;
    scanf("%i", &n);
    int integer[2][20];
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &integer[0][i]);
    }
    //输入第二组数组
    int m;
    scanf("%i", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%i", &integer[1][i]);
    }
    int notcommon[n + m];
    int num = 0;
    //检查第一个数组中不在第二个数组中的数字
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
    //检查第二个数组中不在第一个数组中的数字
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
        //检查是不是重复添加
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