#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%i %i", &n, &x);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        //�������ڲ��
        int temp = i;

         // �����ǰ���־���Ҫ�ҵ�����x (���x=1��9)
         if (temp == x)
         {
             count++;
             continue; // �����굱ǰ���֣�������һ��
         }

        //����λ��
        while (temp > 0)
        {
            int digit = temp % 10;
            if(digit == x)
            {
                count++;
            }

            temp /= 10;
        }

    }
    printf("%i", count);
    return 0;
}