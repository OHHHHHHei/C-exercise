#include <stdio.h>

int main()
{
    int i, j, k, sum;
    for(i = 1; i <= 1000; i++)//��1��ʼѭ����n
    {
        sum = 0;//��ʼ��sum
        k = 0;//��ʼ��k
        j = 1;//��ʼ��j
        int factor[i];//����������������Լ�
        while(j <= i)//�ҵ����i����������
        {
            if(i % j == 0)
            {
                factor[k] = j;
                k++;
            }
            j++;
        }
        for(int m = 0; m < k - 1; m++)//��������ӣ��Ҳ�������
        {
            sum += factor[m];
        }
        if(sum == i)//��֤�Ƿ�Ϊ����
        {
            printf("%i ,", i);
            printf("Its factors are ");
            for(int m = 0; m < k - 1; m++)//��ӡ����
            {
                printf("%i", factor[m]);
                if(m != k - 2)
                {
                    printf(",");//��ӡ����
                }
            }
            printf("\n");

        }
    }
    return 0;
}