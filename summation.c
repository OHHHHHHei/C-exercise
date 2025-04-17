#include <stdio.h>
int gcd(int a, int b);

int main(void)
{
    int n;//����洢���ӷ�ĸ������
    scanf("%i", &n);
    long long denominator[n];
    long long numerator[n];

    long long numerator_sum = 0, integer;
    long long numeratorfinal;
    long long numeratorfake;
    long long lcm = 1;//��ʼ����С������
    for(int i = 0; i < n; i++)
    {
        scanf("%lld/%lld", &numerator[i], &denominator[i]);//��ȡ���ӷ�ĸ
        
        int factor = gcd(lcm, denominator[i]);//�������
        lcm = lcm  * denominator[i] / factor;//����С������
    }
    for(int i = 0; i < n; i++)
    {
        numerator[i] = numerator[i] * lcm / denominator[i];//������
        numerator_sum += numerator[i];
    }
    int is_negative = 0;// ��¼���Ų�ȡ����ֵ����
    if (numerator_sum < 0) 
    {
        is_negative = 1;
        numerator_sum = -numerator_sum;
    }
        numeratorfinal = numerator_sum / gcd(numerator_sum, lcm);//�������
        lcm /= gcd(numerator_sum, lcm);//�����ĸ
        integer = numeratorfinal / lcm;
        numeratorfinal = numeratorfinal % lcm;
        if (integer == 0) //��������0
        {
            if (numeratorfinal == 0)//���ӵ���0
                printf("0");
            else if (is_negative)
                printf("-%i/%i", numeratorfinal, lcm);
            else
                printf("%i/%i", numeratorfinal, lcm);
        } 
        else 
        {
            if (numeratorfinal == 0)
                if (is_negative)
                    printf("-%d", integer);
                else
                    printf("%d", integer);
            else
                if (is_negative)
                    printf("-%d %i/%i", integer, numeratorfinal, lcm);
                else
                    printf("%d %i/%i", integer, numeratorfinal, lcm);
        }
        return 0;
}

int gcd(int a, int b)//շת��������������
{
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}