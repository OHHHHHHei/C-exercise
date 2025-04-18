#include <stdio.h>

int main(void)
{
    int door[101] = {0};
    for(int i = 1; i < 101; i++)//第i个服务员开门
    {
        for(int j = 1; j < 101; j++)//循环每一个门看是否满足条件
        {
            if (j % i == 0)
            {
                door[j] = !door[j];//取反
            }
        }
    }


    int isFirst = 1;//判定是否是第一个
    for(int i = 1; i < 101; i++)
    {
        if (door[i] == 1)
        {
            if(isFirst){
                printf("%i", i);
                isFirst = 0;
            }else{
                printf(" %i", i);
            }
        }
    }
    return 0;
}