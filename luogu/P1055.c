#include <stdio.h>

int main(void)
{
    int isbn[10];
    int checknumber = 0;
    char c;
    isbn[0] = getchar() - '0';
    getchar();//�����ָ���
    for(int i = 0; i < 3; i++)
    {
        isbn[i + 1] = getchar() - '0';
    }
    getchar();//�����ָ���
    for(int i = 0; i < 5; i++)
    {
        isbn[i + 4] = getchar() - '0';
    }
    getchar();//�����ָ���
    c = getchar();// ��ȡУ���룬���⴦��'X'�����
    if(c == 'X')
        isbn[9] = 10;
    else
        isbn[9] = c - '0';
    for(int i = 0; i < 9; i++)//�����ܺ�
    {
        checknumber += isbn[i] * (i + 1);
    }
    checknumber = checknumber % 11;//����У����
    if(checknumber == isbn[9])
    {
        printf("Right");
    }else//������ȷ��У����
    {
        isbn[9] = checknumber;
        for(int i = 0; i < 10; i++)
        {
            if(i == 1 || i == 4 || i == 9)//��ӡ�ָ���
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