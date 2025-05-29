#include <stdio.h>

typedef struct
{
    int xuehao;
    int grade[5];
}student;

float first_course_average(student arr[])//��������ѧ����һ�ſγ̵�ƽ��ֵ
{
    int sum = 0;
    for (int i = 0; i < 4; i ++)
    {
        sum += arr[i].grade[0];//���һ�ſγ̵ĳɼ��ܺ�
    }
    return sum / 4.0;
}

float student_average(student arr)//����ѧ���ܳɼ���ƽ��ֵ
{
    int sum = 0;
    for (int i = 0; i < 5; i ++)
    {
        sum += arr.grade[i];//�����пγ̵ĳɼ��ܺ�
    }
    return sum / 5.0;
}

int isfail(student arr)//����Ƿ������Ų�����
{
    int fail = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr.grade[i] < 60)
        {
            fail++;
        }
    }
    if (fail >= 2)
    {
        return 1;
    } else {
        return 0;
    }
}

int isgood(student arr)
{
    float average = student_average(arr);
    int is_up_eighty_five = 1;
    for (int i = 0; i < 5; i++)
    {
        if(arr.grade[i] < 85)
        {
            is_up_eighty_five = 0;
        }
    }
    if (average >= 90 || is_up_eighty_five)
    {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    student arr[4];
    for (int i = 0; i < 4; i++)//��ȡѧ����Ϣ
    {
        scanf("%i", &arr[i].xuehao);
        for (int j = 0; j < 5; j++)
        {
            scanf("%i", &arr[i].grade[j]);
        }
    }
    float average = first_course_average(arr);
    printf("%.2f\n", average);

    //�ҳ�������ѧ��
    for (int i = 0; i < 4; i++)
    {
        if (isfail(arr[i]))
        {
            printf("%i ", arr[i].xuehao);
            for (int j = 0; j < 5; j++)
            {
                printf("%i ", arr[i].grade[j]);
            }
            printf("%.2f\n", student_average(arr[i]));
        }
    }

    //�ҳ�����ѧ��
    for (int i = 0; i < 4; i++)
    {
        if(isgood(arr[i]))
        {
            printf("%i ", arr[i].xuehao);
        }
    }
    printf("\n");
    return 0;
}

