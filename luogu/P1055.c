#include <stdio.h>

int main(void)
{
    int isbn[10];
    int checknumber = 0;
    char c;
    isbn[0] = getchar() - '0';
    getchar();//跳过分隔符
    for(int i = 0; i < 3; i++)
    {
        isbn[i + 1] = getchar() - '0';
    }
    getchar();//跳过分隔符
    for(int i = 0; i < 5; i++)
    {
        isbn[i + 4] = getchar() - '0';
    }
    getchar();//跳过分隔符
    c = getchar();// 读取校验码，特殊处理'X'的情况
    if(c == 'X')
        isbn[9] = 10;
    else
        isbn[9] = c - '0';
    for(int i = 0; i < 9; i++)//计算总和
    {
        checknumber += isbn[i] * (i + 1);
    }
    checknumber = checknumber % 11;//计算校验码
    if(checknumber == isbn[9])
    {
        printf("Right");
    }else//计算正确的校验码
    {
        isbn[9] = checknumber;
        for(int i = 0; i < 10; i++)
        {
            if(i == 1 || i == 4 || i == 9)//打印分隔符
            {
                printf("-");
            }
            if(isbn[i] == 10)
            {
                printf("X");
                break;
            }
            printf("%i", isbn[i]);
        }
    }
    return 0;
}