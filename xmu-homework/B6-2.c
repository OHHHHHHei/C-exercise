#include <stdio.h>

int detect(int year)
{
    int digit[4];//λ��
    int now_digit = 0;//��ǰ����
    int have_number = 0;//���ڼ�����ͬ����
    int index = 0;//����
    if(year < 1000)//��С��1000ʱ��0Ϊһ�����ڵ�����
    {
        digit[0] = 0;
        have_number++;
    }

    //�������
    while (year != 0)
    {
        int issame = 0;
        now_digit = year % 10;//��ȡһλ
        for (int i = 0; i <= index; i++)
        {
            if(now_digit == digit[i])//��������Ѿ����ڵ�����
            {
                issame = 1;
                break;
            }
        }
        if(issame == 0)
        {
            index++;
            have_number++;
            digit[index] = now_digit;
        }
        year /= 10;//ʹ�ö�ȡ��һλ
    }

    return have_number;
}


int main(void)
{
    int born_year, target_same_number, current_year;
    scanf("%i %i", &born_year, &target_same_number);
    for (int i = born_year; i <= 3000; i++)
    {
        current_year = i;
        if(target_same_number == detect(current_year))
        {
            printf("%i %04d", i - born_year, current_year);
            break;
        }
    }
    return 0;
}