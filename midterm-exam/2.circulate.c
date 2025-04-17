#include <stdio.h>

int main(void)
{
    int decimal,shift;
    int binary[32] = {0};
    int length = 0;

    scanf("%i", &decimal);
    scanf("%i", &shift);

    int temp = decimal;
    while (temp > 0)//十进制转换二进制
    {
        binary[length] = temp % 2;
        temp = temp / 2;
        length++;
    }

    if(length == 0)//考虑等于0的情况
    {
        length = 1;
    }




    shift = shift % length;//确保移位长度小于位数
    if (shift > 0)
    {
        int temp_binary[32] = {0};//建立临时数组防止污染

        for (int i = 0; i < length; i++)
        {
            temp_binary[i] = binary[i];
        }

        for(int i = 0; i < length; i++)
        {
            int shifted = (i + shift) % length;//模运算来确保范围
            binary[i] = temp_binary[shifted];
        }
    }

    for(int i = length - 1;i >= 0; i--)//倒序输出才是正确的二进制
    {
        printf("%i", binary[i]);
    }


    
}