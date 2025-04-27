#include <stdio.h>

int detect(int year)
{
    int digit[4];//位数
    int now_digit = 0;//当前数字
    int have_number = 0;//存在几个不同数字
    int index = 0;//索引
    if(year < 1000)//当小于1000时，0为一定存在的数字
    {
        digit[0] = 0;
        have_number++;
    }

    //检测数字
    while (year != 0)
    {
        int issame = 0;
        now_digit = year % 10;//读取一位
        for (int i = 0; i <= index; i++)
        {
            if(now_digit == digit[i])//如果等于已经存在的数字
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
        year /= 10;//使得读取下一位
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