#include <stdio.h>
#include <string.h>
#include <ctype.h>





int main(void)
{
    char s[500];
    gets(s);//读取
    int length = strlen(s);
    int index = 0;
    int integer[100];
    //识别数字
    for (int i = 0; i < length; i++)
    {
        if (isdigit(s[i]))//寻找第一个数字
        {
            int num = 0;
            int intlength = 0;
            for (int j = i; j < length; j++)//向后循环
            {
                if(isdigit(s[j]))//如果遇到数字
                {
                    intlength++;
                    num = num * 10 + (s[j] - '0');//将字符的ASCII值转化为数字值
                } else//遇到不是数字，直接跳出循环
                {
                    break;
                }
            }
            integer[index++] = num;
            i += intlength - 1;//外循环中i++会加一，所以这里要减去一
        }
    }
    printf("%i\n", index);
    for (int i = 0; i < index; i++)
    {
        printf("%i ", integer[i]);
    }
    return 0;
}