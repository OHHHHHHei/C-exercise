#include <stdio.h>

int main(void)
{
    int decimal,shift;
    int binary[32] = {0};
    int length = 0;

    scanf("%i", &decimal);
    scanf("%i", &shift);

    int temp = decimal;
    while (temp > 0)//ʮ����ת��������
    {
        binary[length] = temp % 2;
        temp = temp / 2;
        length++;
    }

    if(length == 0)//���ǵ���0�����
    {
        length = 1;
    }




    shift = shift % length;//ȷ����λ����С��λ��
    if (shift > 0)
    {
        int temp_binary[32] = {0};//������ʱ�����ֹ��Ⱦ

        for (int i = 0; i < length; i++)
        {
            temp_binary[i] = binary[i];
        }

        for(int i = 0; i < length; i++)
        {
            int shifted = (i + shift) % length;//ģ������ȷ����Χ
            binary[i] = temp_binary[shifted];
        }
    }

    for(int i = length - 1;i >= 0; i--)//�������������ȷ�Ķ�����
    {
        printf("%i", binary[i]);
    }


    
}