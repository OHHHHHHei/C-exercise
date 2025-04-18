#include <stdio.h>

// ������������Ƿ�ֻ����0-9�е�10����ͬ����
int is_valid(int abcde, int fghij)
{
    int flag[10] = {0}; // �������0-9�Ƿ���ʹ��

    // ���abcde��ÿһλ
    int temp = abcde;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (flag[digit])
        {
            return 0; // �����ظ�
        }
        flag[digit] = 1;
        temp /= 10; 
    }
    
    // ���fghij��ÿһλ(����ǰ����)
    temp = fghij;
    int digits = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (flag[digit])
        {
            return 0; // �����ظ�
        }
        flag[digit] = 1;
        temp /= 10;
        digits++;
    }
    
    // ���fghij����5λ�������ǰ����
    for (int i = digits; i < 5; i++) {
        if (flag[0]) {
            return 0; // 0�Ѿ���ʹ�ù�
        }
        flag[0] = 1; // ��¼ǰ����
    }

    // �ؼ��޸ģ������������0-9�Ƿ񶼱�ʹ��
    for (int i = 0; i < 10; i++)
    {
        if (flag[i] == 0)
        {
            return 0; // ������δʹ�ã�����������
        }
    }
    return 1;
}


int main(void)
{
    int n;
    scanf("%i", &n);
    for(int fghij = 1234; fghij <=98765; fghij++)
    {
        int abcde = fghij * n;


        if(abcde < 10000 || abcde > 99999)
        {
            continue;
        }
        if(is_valid(abcde, fghij))
        {
            printf("%05d/%05d=%d\n", abcde, fghij, n);
        }
    }
return 0;

}














