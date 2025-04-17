#include <stdio.h>

int main(void)
{
    int num[2][10];

    //初始化数组
    for(int i = 0; i < 10; i++)
    {
        num[0][i] = i;
    }
    //读取各个数字的个数
    for(int i = 0; i < 10;i++)
    {
        scanf("%i", &num[1][i]);
    }



    for(int j = 1; j < 10; j ++)//从1开始，防止首位是0
    {
        if(num[1][j] != 0)
        {
            printf("%i", num[0][j]);
            num[1][j]--;
            break;//一旦找到第一个非0数字就退出
        }
    }

    
    for(int i = 0; i < 10; i++)
    {
        if(num[1][i] != 0)
        {
            printf("%i", num[0][i]);
            num[1][i]--;
            i--;//回退一位索引防止这个数字还有残留
        }
    }
    return 0;
}




