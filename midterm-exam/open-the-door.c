#include <stdio.h>

int main(void)
{
    int door[101] = {0};
    for(int i = 1; i < 101; i++)//��i������Ա����
    {
        for(int j = 1; j < 101; j++)//ѭ��ÿһ���ſ��Ƿ���������
        {
            if (j % i == 0)
            {
                door[j] = !door[j];//ȡ��
            }
        }
    }


    int isFirst = 1;//�ж��Ƿ��ǵ�һ��
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