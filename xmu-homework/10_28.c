#include <stdio.h>

typedef struct
{
    int xuehao;
    int grade[5];
}student;

float first_course_average(student arr[])//计算所有学生第一门课程的平均值
{
    int sum = 0;
    for (int i = 0; i < 4; i ++)
    {
        sum += arr[i].grade[0];//求第一门课程的成绩总和
    }
    return sum / 4.0;
}

float student_average(student arr)//计算学生总成绩的平均值
{
    int sum = 0;
    for (int i = 0; i < 5; i ++)
    {
        sum += arr.grade[i];//求所有课程的成绩总和
    }
    return sum / 5.0;
}

int isfail(student arr)//检测是否有两门不及格
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
    for (int i = 0; i < 4; i++)//读取学生信息
    {
        scanf("%i", &arr[i].xuehao);
        for (int j = 0; j < 5; j++)
        {
            scanf("%i", &arr[i].grade[j]);
        }
    }
    float average = first_course_average(arr);
    printf("%.2f\n", average);

    //找出不及格学生
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

    //找出优秀学生
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

