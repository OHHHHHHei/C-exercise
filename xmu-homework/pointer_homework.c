#include <stdio.h>

int main(void)
{
    int num;
    printf("how many numbers?");
    scanf("%i", &num);
    printf("input %i numbers:", num);

    int integer[num];
    int *p = integer;// ����ָ�������׵�ַ��ָ��p
    for (int i = 0; i < num; i++)
    {
        scanf("%i", p + i);
    }

    int move;
    printf("how many place do you want to move?");
    scanf("%i", &move);

    // ������ʱ�������ڴ洢��λ��Ľ��
    int temp[num];
    int *p_temp = temp;
    for (int i = 0; i < num; i++)// ִ��ѭ����λ����
    {
        int final_place = (i + move) % num; // ����Ԫ���ƶ������λ��
        *(p_temp + final_place) = *(p + i);// ��ԭ����Ԫ�ظ��Ƶ���λ��
    }

    // �����λ�������
    printf("Now,they are:");
    for (int i = 0; i < num; i++)
    {
        printf("%i", *(p_temp + i));
        if (i != num - 1)// �ڳ������һ��Ԫ���⣬ÿ��Ԫ�غ����һ���ո�
        {
            printf(" ");
        }
    }

    return 0;
}